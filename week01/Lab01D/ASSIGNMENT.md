
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab1d.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by August 31, 2016 08:00am.

* * *

### Variable Practice

* * *

  

To get started, create an empty project called `Lab01D` and add a source file called `main.cpp`. Follow directions in [Lab 01A][1] if process is not memorized yet. Then cut/paste the following code, update the comment section, and build/execute the program. Make sure everything runs fine before moving on to the next step.

```cpp
/* CSCI 261 LabXXX_OR_AYYY: NAME_OF_ASSIGNMENT
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
    
    cout << "Ready to code!! Wait, I need to fill it all in myself?" << endl;
    
    /******** MODIFY OR INSERT CODE ABOVE HERE ********/
    
    return 0; // signals the operating system that our program ended OK.
}
```
  

* * *

### Stating Facts to the Machine (declaring constants)

* * *

You are aware of several facts about the world,  such as your GPA or your middle name.  Some of these facts change and some don't.

Imagine you're standing on top of a building with a bucket of water balloons. When you drop a water balloon from a building, you witness that water balloon accelerate toward the ground according to the laws of gravity (aka free fall). Being a totally genius Mines student, you know that acceleration of free fall on Earth is approximately 9.8 m/s/s. This value is "constant" -- it will never change (at least, as long as you're on Earth). Hence, we call these sorts of things constants.

If we were to simulate dropping water balloons as a computer program, it should be obvious that we would need to somehow inform the machine that the acceleration of the balloons is about 10 m/s/s. How do we define facts that do not change to the machine? We "declare constants."

This is like telling the computer, "Hey computer, there's something I'd like you to know about. It's called FREE_FALL_ACCELERATION, which is an integer and is equal to ten. Mmmkay? Don't forget it, and don't ever let it change while the program is running. It's constant."

Alternatively, this is like saying "The constant integer FREE_FALL_ACCELERATION is equal to ten."

You will realize very quickly that despite the versatility of computers, they are incredibly picky. If you tried any of the following:

```cpp
FREE_FALL_ACCELERATION int const = 10;  
cONSt int FREE_FALL_ACCELERATION = 10;  
int const FREE_FALL_ACCELERATION = 10;  
const int FREE_FALL_ACCELERATION = 10  
const int = 10;
```

Then you'd find that the computer would whine. Programs must adhere to specific rules. We call these rules "syntax." You follow the syntax of English every day. If your friend called you up and asked, "Pizza hey order! let's" you would think they were Yoda but, more importantly, you'd notice that your friend isn't following English syntax.

When you declare constants, you must follow proper syntax (in other words, the machine isn't smart enough to translate your Yoda-code). For constants, the proper syntax is always like this:

```cpp
const int FREE_FALL_ACCELERATION = 10;
```

Recognize this syntax pattern, especially noticing the use of `const`.

One last thing. See how the constant name is in CAPITAL letters? Always use ALL_CAPS for your constant names. Why? Because then anyone reading your code will think "heh, that's a constant!" (Plus, you'll lose points if you don't follow this coding style.)

  

* * *

### Instructions

* * *

Write a program to compute the area of a circle. If you don't recall  the area of a circle from elementary school,  then awww. (Good thing knowledge is always  at your fingertips, with that thing they call the Internet.)

  

Once you have a circle's area equation in hand, you'll realize you should have three variables:

1. `area` of type `double`
2. `radius` of type `double`
3. `PI` of type `double`
It makes sense to use a constant for one of these three variables, and an input statement for another. Figure these things out, and do it! (We suggest you use five digits of precision for the constant.)

After the calculation, print the circle's area. Use  appropriate text in the output for understanding, e.g.,  "The area of a circle with radius 5.2 is 84.9486". Here is an  example run of this program:

Enter the radius of your circle: 3.2  
The area of a circle with radius 3.2 is 32.1699

  

* * *

### Test Values

* * *

  

Here are some known input/output values that you can test against. Be sure to try your own to verify the code works! In the future, we will upload our code to zyBooks (as we did with [Lab01A][2] &amp; [Lab01B][3]) to test that your output is correct and the program behaves correctly.

  

| Inputs | Outputs  |
| --- | --- |
| 5.2    | 84.9486 |
| 3.2    | 32.1699 |
| 0      | 0       |
| -5.5   | 95.0331 |
| 2.7448 | 23.6685 |

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the first homework assignment. Detailed instructions for doing this are posted in [Assignment 01][4].

This lab is due by August 31, 2016 08:00am.

[1]: lab1a.php
[2]: lab01a.php
[3]: lab01b.php
[4]: ../homework/hw1.php
  </iostream>
