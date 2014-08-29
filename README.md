Quake 2 Source Code Tutorial
==============

This project will be a step-by-step tutorial on building the Quake2.exe file. Through a combination of posts on my website and videos on YouTube, we will step through all the code in this project, studying what it does and how the game is organized.<br />

This project is only going through the Quake2.exe file. The other two files needed to run Quake2, the gamex86.dll and ref_gl.dll files, are going to be left empty. This separation of three different files makes things easier on us, so we may as well take advantage of it.<br />

Once I'm done with this, I will go through those other two files as well.<br />

Links to each individual step can be found on my website, starting at http://philipbuuck.com/quake-2-source-code-tutorial-part-one , or on YouTube, where the playlist of tutorials can be found at https://www.youtube.com/playlist?list=PLBKDuv-qJpTalUykY_4qfAEDetRdHBFUX.<br />


-----------
Tutorial  1
-----------
The goal of this tutorial is to add the WinMain function to the program. I then add other functions that are necessary to get WinMain to compile correctly.

In the end, I have added 4 complete functions, the stubs of several others, and several data structures.

This tutorial goes along with an article on my website and a YouTube video.

Article:
http://philipbuuck.com/quake-2-source-code-part-1-winmain

Video:
https://www.youtube.com/watch?v=XlEXCTt4ulo

-----------
Tutorial  0
-----------
As a reference, I created this startup file by taking the results of my video series on building Quake 2 in Visual Studio 2013, and then made the following adjustments.<br />

1) Deleted the /client/adivtab.h file, as it was unnecessary.<br />
2) Add all necessary .h files to quake2.exe. They were not all included, but they are now.<br />
3) Removed the .dll projects. There's a lot of code that they share with the quake2.exe file, and it's easiest to just remove them from the picture for now.<br />
4) Erase all .c and .h files related to quake2.exe. The resulting files have nothing in them except for the copyright statement that id put into the top of each of their files.<br />

From here, we will begin building the game!<br />

Happy Hunting!<br />
Philip Buuck
