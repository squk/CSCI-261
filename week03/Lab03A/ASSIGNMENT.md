
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab3a.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 14, 2016 08:00am.

* * *

### Triangle Classifier

* * *

The goal of this lab is to practice the use of if-else statements by classifying triangles based on their sides. It will also teach you how to correctly compare two double variables for equality using a tolerance factor. Your solution will be submitted with Week03 next Wednesday.

  

* * *

### Instructions

* * *

Create yourself an empty project. Since we assume you have been doing our class assignments, we assume you know how to do this by now. Call this project Lab03A.

  

Write code to first read three real value measurements, i.e., your program should prompt the user to enter the three real values (which should be stored as three double variables). Once done, write code to determine whether the three real value measurements make a triangle. If yes, your program should tell the user whether the triangle is a right, acute, or obtuse triangle (see hints below). If no, your program should politely terminate with an appropriate error message.

The user should be allowed to enter the three real values in any order; in other words, your program should not assume any particular input order such as ascendant or descendant.

  

* * *

### Hints

* * *
* A triangle is possible IFF each side is smaller than the sum of the others.
* To classify a triangle, first you need to determine which of the three sides is the longest. The variable names **a**, **b**, and **c** are often used for the sides of a triangle, with **c** being the longest. If **c** is the longest side of the triangle, then the triangle is a right triangle if (and only if) **a2 \+ b2 == c2**.
* Due to the imprecise nature of double variables, you cannot directly compare two double variables with the == operator. Instead, you should do the comparison using a **TOLERANCE** constant (e.g., **TOLERANCE == 0.0001**) in the following way:

// The fabs function (defined in cmath) returns the absolute value of a given floating point number.  
// Thus, if the following equation is true, then we assume **a<sup>2</sup> \+ b<sup>2</sup> == c<sup>2</sup>**.   
fabs(a<sup>2</sup> \+ b<sup>2</sup> \- c<sup>2</sup>)   

* The **TOLERANCE** constant represents the error we are willing to accept when comparing two double values for equality; in other words, if two values are different by **TOLERANCE** (or less), then we consider the two values as equivalent. In your program, declare a **TOLERANCE** constant and set it to 0.0001.
* You must check to see if the triangle is a right triangle first; otherwise you may be classifying a right triangle as acute or obtuse by mistake.
* If the triangle is not right, you should then check whether if it is acute (i.e., **a2 \+ b2 &gt; c2**).
* Otherwise, if the triangle is not right or acute, then you can say the triangle is obtuse (i.e., **a2 \+ b22**)
* * *

### Test Values

* * *

Here are some known input/output values that you can test against. **Be sure to try your own to verify the code works!**

  
| Inputs |	Classification |	Purpose of Test |
| --- | --- | --- |
| 3 4 5   | Right  | Known Right Triangle     |
| 5 12 13 | Right  | Known Right Triangle     |
| 5 5 9   | Obtuse | Known Obtuse Triangle    |
| 5 5 1   | Acute  | Known Acute Triangle  <br>Sides are not in increasing order  <br>Two sides share the longest length |
| 1 1 1 |  Acute |  Known Acute Triangle  <br>All sides share the longest length |
| 1 2 3 |  Not a Triangle |  Invalid triangle. `a + b > c` fails |
| 3 4 0 |  Not a Triangle |  Invalid triangle. One side has a zero length |
| -3 -4 -5 |  Not a Triangle |  Invalid triangle. All sides have negative lengths (even though  <br>a<sup>2</sup> \+ b<sup>2</sup> = c<sup>2</sup> would still hold.) |

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week03. Detailed instructions for doing this are posted in [Assignment 03][1].

This lab is due by September 14, 2016 08:00am.

[1]: ../homework/hw3.php
  
