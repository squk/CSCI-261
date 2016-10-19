
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab1c.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by August 31, 2016 08:00am.

* * *

### [Cube][1]

#### "26 rooms high, 26 rooms across, 17,576 possible rooms"

* * *

The program below computes the volume of a square prism.  I mean it, just one, specific square prism. How lame! Let's modify  this program and make it more versatile.

  

First, create an empty project and add a new source code, i.e., `main.cpp`, file; if you don't have down how to do this yet, follow directions in [Lab 01A][2]. Call this project `Lab01C` and copy the code below into the `main.cpp` file within the project. Then update the comment section, and build/execute the program. Make sure everything runs fine before moving on to the next step.

  

* * *

### Your Task

* * *

  

Your task is two-fold.

First, change the program below to output the volume of the prism with an appropriate output statement.  (Suggestion: do not start the next task until you are happy with  the execution of this first task.)

Second, change the program below to calculate the volume of any box-like structure or jail cell. (Oh,  wait, I thought you said _prison_, not prism.) In other words, ask the user to enter a whole number for the length, width, and height of the prism (or prison), and then capture that input via appropriate input statements. Be considerate and think about what should always accompany an input statement as well.

```cpp
/* CSCI 261 Lab 01C: PRISM VOLUME
 *
 * Author: XXXX (_INSERT_YOUR_NAME_HERE_)
 *
 * Add more complete description here...
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** MODIFY OR INSERT CODE BELOW HERE ********/

    int length = 17;
    int width = 17;  
    int height = 2; 
    int volume;

    // Volume of a box is length times width times height. 
    volume = length * width * height;

    /******** MODIFY OR INSERT CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}
	
```

* * *

### Test Values

* * *

  

Here are some known input/output values that you can test against. Be sure to try your own to verify the code works! In the future, we will upload our code to zyBooks (as we did with [Lab01A][2] &amp; [Lab01B][3]) to test that your output is correct and the program behaves correctly.

  
|Input    | Output |
| ------- | --- |
| 17 17 2 | 578 |
| 18 1 19 | 342 |
| 2 2 0   | 0   |
| 2 -2 2  | -8  |

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the first homework assignment. Detailed instructions for doing this are posted in [Assignment 01][4].

This lab is due by August 31, 2016 08:00am.

[1]: https://www.youtube.com/watch?v=YAWSkYqqkMA
[2]: lab01a.php
[3]: lab01b.php
[4]: ../homework/hw1.php
  </iostream>
