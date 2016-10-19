
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab1b.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by August 31, 2016 08:00am.

* * *

### An Intro To ASCII Art

* * *

  

Part 1 of [Assignment 01][1] requires you to create your own ASCII Art to print to the screen. For this lab, you'll get more practice outputting information to the screen by creating creative pictures. You will need to follow the steps in [Lab01A][2] to create a new project and main.cpp file for this lab.

Your first task is to add the appropriate `cout` statements to print this tree to the screen:
```
   *
  ***
 *****
*******
  ***
```
  
  

As with [Lab01A][2], we will be using zyBooks to verify the output of our program. At this time, you can upload your `main.cpp` file to zyBooks Section 1.15 to see if the first test passes (more details are below in the Submission section). If it does, then move on to the next part.

Once the first test passes, add two blank lines and add additional statements to print what zyBooks calls a cat (I thought it was a rabbit).
```
/\   /\
  o o
 =   =
  ---
```
  

_**Hint:** A backslash in a string acts as an escape character, such as with a newline n. So, to print an actual backslash, escape that backslash by prepending another backslash. Ex: The following prints a single backslash: _

```cpp
cout << "\\";
```

* * *

### Lab Submission

* * *

  

To verify you set all of your cout statements properly and you are getting the correct output, upload your main.cpp file (found in Z:CSCI261Lab01BLab01B) to zyBooks Section 1.15. zyBooks will then run your code and compare the output of your code to the expected output of the program. If everything matches, you should see two checkmarks for each test that passed. If a test fails, then you it will show what did not match and you can make the correction. Once both tests pass, you are good to go!

You will submit your solution to this lab with your first official homework assignment ([Assignment 01][1]. Detailed instructions for doing this are posted in [Assignment 01][1].

This lab is due by August 31, 2016 08:00am.

  

* * *

### Optional Blackboard Submission Practice

* * *

  

In previous versions of this course, many students have had problems with submitting a given homework assignment correctly. The student then loses several points on his/her homework assignment, just because of a submission problem. This makes us sad.

Thus, we offer you the opportunity to practice submitting a homework assignment (your choice; no points). As Aristotle said _For the things we have to learn before we can do them, we learn by doing them_. (We'll ignore Billie Joe Armstrong's alternative view of practice, i.e., _School is practice for the future, and practice makes perfect. But nobody's perfect, so why practice?_)

In [Lab01A][3], you created and executed your first C++ Program. In [Lab01B][4], you created your second C++ program. Let's go ahead and submit these programs to Blackboard for practice!

Using Windows Explorer, not to be confused with Internet Explorer, find the location of your project. If you followed the directions on [Lab01A][3] closely, this location is on your Z: drive at CSCI261Lab01ALab01A (where the first Lab01A is the Solution name and the second Lab01A is the project name).

Now, using our [course's homework submission][5] instructions, submit the main.cpp code from [Lab01A][3] &amp; [Lab01B][4] to Week00 in Blackboard. Your main.cpp file from Lab01A should be within a directory called Lab01A, which is itself in a directory called Week00. Likewise for Lab01B. See [homework submission instructions][5] for details on the desired directory structure. If you submit this file by Saturday 8AM, we will 'grade' it (again, zippo points) and let you know if your submission was NOT correct by Monday evening.

In summary, for the optional homework due on Saturday 8AM, follow these specific steps:

* create a directory called week00.
* within week00, create two subdirectories: Lab01A &amp; Lab01B. (We will have more subdirectories in all future weeks.)
* within your new week00/Lab01A directory, copy in your main.cpp file from your [Lab01A][3] solution.
* within your new week00/Lab01B directory, copy in your main.cpp file from your [Lab01B][4] solution.
* compress the week00 directory (see [Step 3 here][6] for details).
* submit the week00.zip file to Blackboard (see [Steps 5-10 here][7] for details).
* after you submit, download the file and double check it contains all that you think it contains!

[1]: ../homework/hw1.php
[2]: lab01a.php
[3]: lab1a.php
[4]: lab1b.php
[5]: ../resources/submission.php
[6]: ../resources/submission.php#3
[7]: ../resources/submission.php#5
  
