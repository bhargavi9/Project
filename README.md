So the purpose of this call is really just to kind of hand this off to Garvey. She's your assigned solution architect. She's going to work with the app team to come up with your topology and your design. I know your project has already already been created in Flex Cloud, but she's going to work on documenting what your design is going to be, check on the sizing.
PYBURN, RICH 0 minutes 23 seconds
And work with you through that. Once you have a solution design, then we have a an engineer that's been assigned to the project too. I actually reached out. James who just joined is assigning me the architect. This way you have a resource to help you with the builds. Typically they would help you build your non prod environment, help you with.
PYBURN, RICH 0 minutes 43 seconds
The Terraform scripts so that you can build out your product environment. That'll be after this solution design is completed. So with that, actually before I go to Bookarvey, I'll just give you an update on two things, Marina, that you had asked about the training.
PYBURN, RICH 0 minutes 59 seconds
I'm still waiting to hear back about getting access to the training. We're not sure exactly why your team doesn't have it. Maybe because they're Amdocs employees, not AT&T employees, but I'll get an answer on on that that one.
1:11
1 minute 11 seconds
OK.
NS

Neeraj Sharma(88280)
1 minute 13 seconds1:13
Neeraj Sharma(88280) 1 minute 13 seconds
No, we have access to the rest of the recordings, Rich, you know, but not the last two one.
MM

Marina Murphy
1 minute 16 seconds1:16
Marina Murphy 1 minute 16 seconds
Yeah.

PYBURN, RICH
1 minute 17 seconds1:17
PYBURN, RICH 1 minute 17 seconds
Sure.
PYBURN, RICH 1 minute 20 seconds
Right, right. Yeah, yeah, that the rest is on wiki. This is on PLE. And right now I don't have an answer as to why you can't get to those courses. There is one of them is available. I just, I wouldn't click. So I just posted in the the chat that I I created. It's a LinkedIn course for GitHub.
NS

Neeraj Sharma(88280)
1 minute 24 seconds1:24
Neeraj Sharma(88280) 1 minute 24 seconds
Yep.

PYBURN, RICH
1 minute 40 seconds1:40
PYBURN, RICH 1 minute 40 seconds
I think PLE links to this, so if you have access to LinkedIn you can at least get to the GitHub one. But we're still working on getting an answer as far as getting you access to the PLE courses. The other question was you had an issue with some of the one of the screens in the console with the users.
PYBURN, RICH 2 minutes 1 second
Only showing 10. I don't have an answer to that. I gave you some some links for support, but also I'll give you the name of the engineer that's assigned. They may or may not be able to help you.
PYBURN, RICH 2 minutes 17 seconds
But at least you have another resource. So that said, I just want to give you a quick update on that. So I'm going to turn this over to Bugarvey. She's going to go over the requirements that you've already provided. I'm sure she's got a a bunch of other questions to help work on the design. So Bugarvey. Oh, yes. Hey, James.

ARTEMUS, JAMES W
2 minutes 31 seconds2:31
ARTEMUS, JAMES W 2 minutes 31 seconds
Hey, hey Ridge. Hey, quick question on the the the user page. Is there a concern that you scrolled to the next page or you clicked on the down arrow or you only see because I think the 10 is just a limit of what each page?

PYBURN, RICH
2 minutes 35 seconds2:35
PYBURN, RICH 2 minutes 35 seconds
Sure.
PYBURN, RICH 2 minutes 37 seconds
Yeah.

ARTEMUS, JAMES W
2 minutes 51 seconds2:51
ARTEMUS, JAMES W 2 minutes 51 seconds
With display. So do you have more users or with? I was trying to understand the question with regards to the the count of users added.

PYBURN, RICH
3 minutes 3 seconds3:03
PYBURN, RICH 3 minutes 3 seconds
That came from Jason. I don't know if Jason's on this call. I don't see Jason on the call.

ARTEMUS, JAMES W
3 minutes 10 seconds3:10
ARTEMUS, JAMES W 3 minutes 10 seconds
OK, well in in the future, if you in the next meeting, can someone just scroll to the next page? Because I have a call with the platform team today and I'm gonna this has never came up and I think it's based on the limit of users that can be seen on each page.
AB
ATCHALA, BHARGAVI
3 minutes 12 seconds3:12
ATCHALA, BHARGAVI 3 minutes 12 seconds
2.

ARTEMUS, JAMES W
3 minutes 26 seconds3:26
ARTEMUS, JAMES W 3 minutes 26 seconds
But I think there is a scroll or or down arrow that you can use to expose more users if there are more.

PYBURN, RICH
3 minutes 40 seconds3:40
PYBURN, RICH 3 minutes 40 seconds
And I can reach out to Jason and.
CS
Chetan Sood
3 minutes 40 seconds3:40
Chetan Sood 3 minutes 40 seconds
James Yeah James I guess too. I mean I'll I'll just check with the team within to see the full user list. There is a drop down where we can select the number of users that can be displayed on the screen like 10/20/30/40.
Chetan Sood 3 minutes 56 seconds
I'll just check. I'll check with Mariana on this.

ARTEMUS, JAMES W
4 minutes4:00
ARTEMUS, JAMES W 4 minutes
OK. Thank you.
MM
Marina Murphy
4 minutes 3 seconds4:03
Marina Murphy 4 minutes 3 seconds
It was Jason who had that issue. So it I'll add you. Was that she Daniel saying saying that? Yeah, I'll add you. OK, alright.

PYBURN, RICH
4 minutes 6 seconds4:06
PYBURN, RICH 4 minutes 6 seconds
Yeah.
CS
Chetan Sood
4 minutes 11 seconds4:11
Chetan Sood 4 minutes 11 seconds
Yes, yes, yes.

PYBURN, RICH
4 minutes 17 seconds4:17
PYBURN, RICH 4 minutes 17 seconds
All right, McGarvey, it's all yours.
AB
ATCHALA, BHARGAVI
4 minutes 21 seconds4:21
ATCHALA, BHARGAVI 4 minutes 21 seconds
Yeah, thanks, Rich. OK, let me share my screen and you can provide me.
ATCHALA, BHARGAVI 4 minutes 31 seconds
Oh, can you see the screen?
NS
Neeraj Sharma(88280)
4 minutes 35 seconds4:35
Neeraj Sharma(88280) 4 minutes 35 seconds
Not yet. Yeah, now we can see it.
AB
ATCHALA, BHARGAVI
4 minutes 38 seconds4:38
ATCHALA, BHARGAVI 4 minutes 38 seconds
OK, perfect.
ATCHALA, BHARGAVI 4 minutes 42 seconds
OK, uh, let me open the servers list that I've prepared, which are in scope that I received from Rich.
ATCHALA, BHARGAVI 4 minutes 52 seconds
There are 19 servers which are in scope for rebuild, right?
ATCHALA, BHARGAVI 5 minutes 5 seconds
Oh, is the is the is that on the list?
VG
Vishal Ghai
5 minutes 9 seconds5:09
Vishal Ghai 5 minutes 9 seconds
Yes.
AB
ATCHALA, BHARGAVI
5 minutes 9 seconds5:09
ATCHALA, BHARGAVI 5 minutes 9 seconds
What am I missing in OK?

PYBURN, RICH
5 minutes 11 seconds5:11
PYBURN, RICH 5 minutes 11 seconds
Well, in addition to those, there's there's also two physical databases they wanted to also migrate to Flexcloud.
AB
ATCHALA, BHARGAVI
5 minutes 19 seconds5:19
ATCHALA, BHARGAVI 5 minutes 19 seconds
OK, uh, is it already in the decom file?

PYBURN, RICH
5 minutes 24 seconds5:24
PYBURN, RICH 5 minutes 24 seconds
In the Yeah, if you download the server decom artifact, it should be in there. This looks like it's just listed.
AB
ATCHALA, BHARGAVI
5 minutes 26 seconds5:26
ATCHALA, BHARGAVI 5 minutes 26 seconds
Yeah, I have.
ATCHALA, BHARGAVI 5 minutes 30 seconds
OK, let me see.

PYBURN, RICH
5 minutes 35 seconds5:35
PYBURN, RICH 5 minutes 35 seconds
It's unfilter everything and you'll see them. I think it's right now just filtered on. Looks like just the oh, there you go.
PYBURN, RICH 5 minutes 45 seconds
Scroll to the right. This might be an older version of it.
PYBURN, RICH 5 minutes 51 seconds
So I know in the I uploaded a an updated one that showed the two database servers.
CS
Chetan Sood
5 minutes 58 seconds5:58
Chetan Sood 5 minutes 58 seconds
I guess the physical boxes are the database boxes.

PYBURN, RICH
6 minutes6:00
PYBURN, RICH 6 minutes
Right, right.
AB
ATCHALA, BHARGAVI
6 minutes 2 seconds6:02
ATCHALA, BHARGAVI 6 minutes 2 seconds
This OK, these are test, right? Test cells.
NS
Neeraj Sharma(88280)
6 minutes 6 seconds6:06
Neeraj Sharma(88280) 6 minutes 6 seconds
There are a couple of more if you look at the top right physical boxes.
AB
ATCHALA, BHARGAVI
6 minutes 11 seconds6:11
ATCHALA, BHARGAVI 6 minutes 11 seconds
Oh, OK.
NS
Neeraj Sharma(88280)
6 minutes 12 seconds6:12
Neeraj Sharma(88280) 6 minutes 12 seconds
And yeah, I think in the bottom also, yeah, yeah.
CS
Chetan Sood
6 minutes 14 seconds6:14
Chetan Sood 6 minutes 14 seconds
You can filter it with physical boxes.

PYBURN, RICH
6 minutes 17 seconds6:17
PYBURN, RICH 6 minutes 17 seconds
But Garvey, open and go go to the UAQ and open up the the attached artifact that's there.
AB
ATCHALA, BHARGAVI
6 minutes 26 seconds6:26
ATCHALA, BHARGAVI 6 minutes 26 seconds
OK, sure.

PYBURN, RICH
6 minutes 29 seconds6:29
PYBURN, RICH 6 minutes 29 seconds
I think I'm gonna uploaded a new one after you downloaded it.
AB
ATCHALA, BHARGAVI
6 minutes 34 seconds6:34
ATCHALA, BHARGAVI 6 minutes 34 seconds
OK, these are the.

PYBURN, RICH
6 minutes 35 seconds6:35
PYBURN, RICH 6 minutes 35 seconds
Yeah, so that's that's that's the two servers listed there. So those are the two servers that they want to also migrate.
NS
Neeraj Sharma(88280)
6 minutes 43 seconds6:43
Neeraj Sharma(88280) 6 minutes 43 seconds
OK.
AB
ATCHALA, BHARGAVI
6 minutes 50 seconds6:50
ATCHALA, BHARGAVI 6 minutes 50 seconds
Um, still so much. OK, no old age.
ATCHALA, BHARGAVI 7 minutes 3 seconds
OK.
ATCHALA, BHARGAVI 7 minutes 10 seconds
These are in bottle. OK, I modify, but let me copy to the current call that I have so that I'll not miss the current scope. OK, these two are the database service.
ATCHALA, BHARGAVI 7 minutes 25 seconds
And rest of all of them are the application service, right?
ATCHALA, BHARGAVI 7 minutes 30 seconds
Question is to the app application team.
MM
Marina Murphy
7 minutes 36 seconds7:36
Marina Murphy 7 minutes 36 seconds
Yes, rest are all app servers.
JC
Jeff Coronado
58 minutes 31 seconds58:31
Jeff Coronado 58 minutes 31 seconds
Yeah, yeah, no problem.
AB
ATCHALA, BHARGAVI
58 minutes 36 seconds58:36
ATCHALA, BHARGAVI 58 minutes 36 seconds
OK, can you send me that? Yeah, I can discuss with the flex log team and I can let you know.
JC
Jeff Coronado
58 minutes 38 seconds58:38
Jeff Coronado 58 minutes 38 seconds
I.
Jeff Coronado 58 minutes 40 seconds
Mhm. OK, OK, I'll I'll do it now.
AB
ATCHALA, BHARGAVI
58 minutes 46 seconds58:46
ATCHALA, BHARGAVI 58 minutes 46 seconds
OK. Thank you.
CS
Chetan Sood
58 minutes 49 seconds58:49
Chetan Sood 58 minutes 49 seconds
Bhagavi, please check on the list of softwares that are not allowed and share the list if there is any.
AB
ATCHALA, BHARGAVI
58 minutes 57 seconds58:57
ATCHALA, BHARGAVI 58 minutes 57 seconds
OK.
CS
Chetan Sood
58 minutes 58 seconds58:58
Chetan Sood 58 minutes 58 seconds
Thank you.

PYBURN, RICH
59 minutes 10 seconds59:10
PYBURN, RICH 59 minutes 10 seconds
OK. Well, thank you all for joining. Sounds like we got a few follow-up items and meetings that are going to be scheduled and we'll all be talking soon. And there's a chat room created to help facilitate communications. If you're not in that, you can.
PYBURN, RICH 59 minutes 25 seconds
Let me know or anybody on this project that's already in that chat room and they they can add you to it. With that, thank you all for joining. We'll talk soon.
