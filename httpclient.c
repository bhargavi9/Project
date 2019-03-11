#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>
#include <arpa/inet.h>
int main(int argc, char *argv[])
{
    int sockid;
    //LocalHost PortNumber
    int port=80;
    char hostname[1000],pathname[1000],dt[1000];
    //File declaration
    char *file;
    file="index.html";
    strncpy(dt,argv[1],1000);

    // 1.Taking hostname and pathname as input
    sscanf(dt,"http://%[^/]/%s",hostname,pathname);
    printf("HostName:%s\n Pathname: %s:\n",hostname,pathname);
    printf("Bhargavi Atchala....");

    if(argc!=2) {
        printf("URL is: %s\n", argv[1]);
        exit(0);
    }

    sockid= socket(AF_INET, SOCK_STREAM, 0);

    if(sockid < 0) {
        perror("Invalid Socket....\n");
        exit(1);
    }


    //Host address in hostent struct
    struct hostent *server_he;


    //The gethostbyname returns the host and hostname information if true or else returns null pointer
    if((server_he = gethostbyname(hostname)) == NULL) {
        perror("Invalid HostName..\n");
        return 2;
    }

    struct sockaddr_in serveraddr;

    //It clears the variable serveraddr and puts zeros instead
    bzero((char *) &serveraddr, sizeof(serveraddr));

    //It will set the address
    serveraddr.sin_family = AF_INET;
    bcopy((char *)server_he->h_addr,(char *)&serveraddr.sin_addr.s_addr,server_he->h_length);
    char ip[100];
    struct hostent *he;
    struct in_addr **addr_list;
    int i;
    if ( (he = gethostbyname( hostname ) ) == NULL)
    {   herror("gethostbyname");
    }
    addr_list = (struct in_addr **) he->h_addr_list;
    for(i = 0; addr_list[i] != NULL; i++)
    {   strcpy(ip , inet_ntoa(*addr_list[i]) );
    }

    printf("IP Address : %s\n",ip);






    //htons function will convert the given port number to Big Endian Short Integer
    serveraddr.sin_port=htons(port);


    //2.Establishing Connection to Server using sockfd to specified serveraddr
    if(connect(sockid, (struct sockaddr *) &serveraddr, sizeof(serveraddr))< 0)
    {
        perror("Failure in Server Connection..\n");
        exit(0);
    }

    else
        printf("Successfull Connection Established......\n");

    //3.constructing a HTTP Request
    char req[1000];
    int bytes_sent;
    sprintf(req, "GET /%s HTTP/1.0\r\nHost: %s\r\n\r\n",pathname,hostname);
    // 3.sending request to Server,sizeof function returns the sizeof of data to be sent
    bytes_sent=send(sockid, req, sizeof(req),0);
    printf("bytes sent %d:\n",bytes_sent);

    //receiving the data from server
    int byte_rec;

    // initializing buffer with 1000 bytes
    const int BUFFER_SIZE =1024*1024;
    char buffer[BUFFER_SIZE];

    // clearing buffer if it has previous data by putting zeros instead
    bzero(buffer, BUFFER_SIZE);


    //receives up to maximum of 1000 bytes of data from the connection and stores them in buffer array
    byte_rec= recv(sockid,buffer,1000,0);
    printf("bytes Received %d:\n",byte_rec);
    if(byte_rec<0) {
        error("ERROR reading from the socket...\n");
    }

    // checking the status if it is 200 ok or not
    int status;



    sscanf(buffer,"HTTP/1.%*[01] %d \n",&status);


    //If status is 200 then print the status

    if(status==200) {
        printf("The status is: %d ok\n", status);


        //Create an End of HTTP Headers
        char *EOH;

        //Search for "\r\n\r\n" in buffer
        EOH =strstr(buffer, "\r\n\r\n");

        char *data=EOH+4;

        //If the End of Header is found then print the data
        if(EOH) {

            printf("The data part is: %s\n",data);

            // getting filename from pathname

            const char sh = '/';
            char *file_name;

            //Search for last occurence of '/' in pathname
            file_name = strrchr(argv[1], sh);


            char *f_name=file_name+1;



            printf("Filename after %c is : %s\n", sh, file_name);

            //Save the data to file
            printf("Saving data to file :%s\n",file_name);



            //if(filename != NULL && filename!='/' ){

            if(*f_name) {

                //Open the file in write mode
                FILE *fileptr=fopen(file_name+1,"w+");

                //Calculating the data left in first message
                int bytes_left=byte_rec-(data-buffer);

                /*data - is the array of elements to be written
                  1 -size in bytes of each element to be written
                      bytes_left - No of Bytes Left
                  fp- File Pointer to specify and output stream	*/

                fwrite(data, bytes_left,1,fileptr);

                //Loop to write the rest of data into file
                while((byte_rec= recv(sockid,buffer,1000,0))!=0)
                {
                    fwrite(buffer,byte_rec,1,fileptr);
                }
                fclose(fileptr);
            }

            //Writing the data to file from the end of HTTP header pointer if found
            else if(*file_name == '/')
            {
                FILE *fileptr=fopen(file,"w+");
                int bytes_left=byte_rec-((data-buffer)+4);
                fwrite(data, bytes_left,1,fileptr);


                while((byte_rec= recv(sockid,buffer,1000,0))!=0)
                {
                    fwrite(buffer,byte_rec,1,fileptr);
                }

                //Close the file
                fclose(fileptr);
            }
        }

        //If end of header is not found
        else {
            printf("End of header not found. \n");
        }

    }

    //If file is not found
    else {
        if(status==200)
        {
            printf("Status : %d-Request is succeeded. The information returned is dependent on method used in the request\n",status);
        }
        else if(status=301)
        {
            printf("Status : %d-Moved Permanently,resource is assigned a new url\n",status);
        }
        else if(status=400)
        {
            printf("Status : %d-Bad Request\n",status);
        }

        else if(status=404)
        {
            printf("Status : %d-Document is not found in the server\n",status);
        }
        else if(status=505)
        {
            printf("Status : %d-HTTP version is not supported\n",status);
        }


        exit(1);
    }
    return 0;
}
