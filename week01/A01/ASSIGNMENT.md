
[Source](http://eecs.mines.edu/Courses/csci261/homework/hw1.php "Permalink to CSCI 261 - Programming Concepts - Assignment 01")

# CSCI 261 - Programming Concepts - Assignment 01

This assignment is due by August 31, 2016 08:00am.

* * *

### Let's Start!

* * *

  

In this homework assignment, we focus on two of our programming concepts: (1) defining integers and (2) using output.

To begin this homework (and future homework assignments), you need to create an empty C++ Project. See _Creating a C++ Empty Project_ in [Lab01A][1] as a reminder of the steps. We suggest you call your new project `Assignment01`.

Once your project is created, you then need to _Add a New C++ Source Code File_. Again, see [Lab01A][1] as a reminder of the steps. We suggest you call your new project `main.cpp` and then cut/paste the following code into your `main.cpp`.
```cpp
/* CSCI 261 Assignment 01: Hello World and ASCII Art
 *
 * Author: XXXX (_INSERT_YOUR_NAME_HERE_)
 *
 * More complete description here...
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {
    
    /******** INSERT YOUR CODE BELOW HERE ********/
    
    cout << "Hello XXXX!!" << endl; // add your name
    
    /******** INSERT YOUR CODE ABOVE HERE ********/
    
    return 0; // signals the operating system that our program ended OK.
}
```

* * *

### Running Your Code

* * *

  

The easiest way to compile and execute your project is to type Ctrl-F5. If the screen flashed and disappeared then remind yourself how to configure your project to pause the output after an execution by viewing _Running Your Code_ in [Lab01A][1]. Once you have your new project, your `main.cpp`, and your execution environment setup, it is time to start coding! Woo hoo!

  

* * *

### Who are you?

* * *

Think about yourself for a moment. What comes to mind? From the moment you wake up until the moment you go to sleep, your mind receives a variety of input and you form a certain perspective about yourself and the world. In other words, you are aware of several facts, such as your pet's name or the current time.

What are some facts about yourself? How many friends do you have? What do you like to do for fun? What is your current GPA? What color shirt are you wearing today? Do you like broccoli? If you think about it, there are a lot of facts about each of us. And some of these facts change (age) and some don't (height, unless you shrink in old age). Here's an example:
```cpp
int numFriends = 13;
```
This is like telling the computer, "Hey computer, there's something I'd like you to know about. It's called numFriends, which is an integer and is equal to 13. Mmmkay?"

Alternatively, this is like saying "The integer numFriends is equal to 13."

You will realize very quickly that despite the versatility of computers, they are incredibly picky. If you tried any of the following:
```cpp
numFriends int = 13;  
INT numFriends = 13;  
int 13 = numFriends;  
int numFriends = 13  
int = 13;
```
Then you'd find that the computer would whine. Programs must adhere to specific rules. We call these rules "syntax." You follow the syntax of English every day. If your friend called you up and asked, "Pizza hey order! let's" you would think they were Yoda but, more importantly, you'd notice that your friend isn't following English syntax.

When you declare variables, you must follow proper syntax (in other words, the machine isn't smart enough to translate your Yoda-code). For an integer, the proper syntax is always like this:
```cpp
int numFriends = 13;
```
We'll talk more about that `int` thing (a data type) and variable declarations Friday. For now, just recognize this syntax pattern for declaring a variable.

  

* * *

### Instructions: Part I

* * *

The first goal of this assignment is to create a smiley face that is printed on the screen. Here is a simple example. (We expect your smiley face will be better than this, and actually smile!)

```
     ######
    # O  O #
    #  {}  #
    # ____ #
    #      #
     ######
```
  

You can visit [this site][2] to learn more about ASCII and ASCII Art if you would like. Or Google images of "ascii art smiley faces" (favorite one from Northwestern follows).

![][3]

You need to use a combination of cout statements to create a face that gets printed to the screen. Most likely, you will need to edit your code, 'Build' and then 'Play' your code several times (Ctrl-F5 is your friend!). Following these steps again and again is what C++ programmers always do, in fact we call it the edit-compile-test cycle. Once you are happy with the output of your smiley face, move on to Part II of this assignment.

**Bonus!!!** we'll have a small prize for the best smiley face submitted in each section, and a larger prize for the best smiley face submitted in all sections. Good luck!

  

* * *

### Instructions: Part II

* * *

In this second homework goal, you need to declare and assign appropriate values to three facts about yourself. The three facts can be anything that is true about you (perhaps things you are proud of). For example, how high can you jump (in inches), how many seconds can you hold your breath, or how fast can you run. All three variables must be of int data type (i.e., whole numbers).

Once your variables are defined, add code to display the information stored in your variables below your smiley face. An example output follows:
```
Hello World!  
I am 21 years old.  
I can run 100m in 13s.  
I enjoyed 7 cookies yesterday.   
Goodbye!
```
  

* * *

#### Grading Rubric

* * *

Your submission will be graded according to the following rubric.

| Percentage | Requirement Description |
| --- | --- |
| 10% | All code submitted properly                                                                                                          |
| 15% | Labs completed                                                                                                                       |
| 10% | Assignment compiles                                                                                                                  |
| 25% | Awesome ASCII art printed and formatted properly on screen                                                                           |
| 15% | Interesting facts about you printed to screen                                                                                        |
| 25% | (1) Comments used (2) Coding style followed (3) Appropriate variable names, constants, and data types used (4) Instructions followed |

  

* * *

#### Submission

* * *

Always, **always**, **ALWAYS** update the header comments at the top of your main.cpp file. And if you ever get stuck, remember that there is LOTS of [help][4] available.

  

Lastly, homework submission instructions for Assignment 01 are available [here][5]. The file you submit should be called week01.zip, and inside the `week01` directory should be five sub-directories called `Lab01A`, `Lab01B`, `Lab01C`, `Lab01D` and `HW01`. Within each of these sub-directories should be the associated `main.cpp` file. That is, your `Lab01A/main.cpp` file should be your solution to Lab01A, your `Lab01B/main.cpp` file should be your solution to Lab01B, your `Lab01C/main.cpp` file should be your solution to Lab01C, your `Lab01D/main.cpp` file should be your solution to Lab01D, and your `A01/main.cpp` file should be your code from Part I and Part II of this assignment. We strongly encourage you to verify that the file you submitted is what you meant to submit!

In summary, for homework due on Wednesday, August 31 follow these specific steps:

* create a directory called `week01`.
* within `week01`, create five subdirectories: `Lab01A`, `Lab01B`, `Lab01C`, `Lab01D`, and `A01`.
* within your new `week01/Lab01A` directory, copy in your `main.cpp` file from your [Lab01A][1] solution.
* within your new `week01/Lab01B` directory, copy in your `main.cpp` file from your [Lab01B][6] solution.
* within your new `week01/Lab01C` directory, copy in your `main.cpp` file from your [Lab01C][7] solution.
* within your new `week01/Lab01D` directory, copy in your `main.cpp` file from your [Lab01D][8] solution.
* within your new `week01/A01` directory, copy in your `main.cpp` file from your `A01` solution.
* compress the `week01` directory (see Step 3 [here][9] for details).
* submit the `week01.zip` file to Blackboard (see Steps 5-10 [here][10] for details).
* **after you submit, download the file and double check it contains all that you think it contains! **

This assignment is due by August 31, 2016 08:00am.

[1]: ../labs/lab01a.php
[2]: http://en.wikipedia.org/wiki/ASCII_art
[3]: http://www.cs.northwestern.edu/~franklin/images/hitch-hiker.jpeg
[4]: ../resources/help.php
[5]: ../resources/submission.php
[6]: ../labs/lab01b.php
[7]: ../labs/lab01c.php
[8]: ../labs/lab01d.php
[9]: ../resources/submission.php#3
[10]: ../resources/submission.php#5
  </iostream>
