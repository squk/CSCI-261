
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab4a.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 21, 2016 08:00am.

  

* * *

### Triangle Classifier + Pretty Output + REPL
* * *

To gain practice with `while` loops, we will use a `while` loop to validate user input, and continue asking for input until a valid input is given.

Creating a REPL (Read, Evaluate, Print, Loop) is a way that we can repeatedly ask for a user's input and provide immediate feedback. We're going to build a REPL for triangle measurement input (because triangles are so cool, we just can't stop talking about them).

### Instructions

This will be a new project. Create one and call it Lab04A. (Your solution to this Lab will be submitted with Homework 04, a week from this Wednesday.)

  

Recall in [Lab 03B][1] that a user enters three triangle measurements. In Lab03B, we checked a triangle's feasibility and set `isTriangle` to `false` if the measurements entered did not form a triangle. Wouldn't it be more useful if we could force the user to input valid measurements; that is, if we asked for input again if what was entered is invalid?

  

In a REPL program, you want to continually do the following:

1. Ask user to enter input
2. Read user input
3. If input is invalid, go to step 1
4. Do something based on the user input

  

In this assignment, you will ask the user to enter three real value measurements for their triangle, and store them in some variables. Then, continue to ask the user for their measurements until they are valid (i.e., all measurements &gt; 0 and measurements form a triangle). Here is pseudocode for your Lab04A program:

1. Ask user to enter three sides for a triangle
2. Read their input
3. If any measurement is `&lt;0`, go to step 1
4. If the measurements do not form a triangle, go to step 1
5. Print "Woohoo - input is valid"
6. Print triangle summary (classification, perimeter, area) displaying 2 decimal places
7. Exit the program

When creating this sort of input loop, it's important that the user understands what's taking place. If the user has entered invalid input, notify them of it appropriately (e.g., input is &lt;0). It's helpful to put yourself in the user's shoes, and ask questions such as "If I were **using** this program, how would I want it to work?"

  

* * *

### Test Values

* * *

Here are some known input/output values that you can test against. **Be sure to try your own to verify the code works!**

  
| Inputs |	Classification |	Perimeter |	Area |	Purpose of Test |
| --- | --- | --- | --- | --- |
| 3 -5 3  <br>14.43 13.32 5.55 | Right | 33.30 | 36.96 |* Initially inputs have a negative side length<br>* Known Right Triangle<br>* Sides are not in increasing length<br>* Resultant value is longer than 2 decimal places<br>* Floating point values cannot be represented exactly |
| 1 3 2  <br>4 2 6  <br>144.43 133.32 55.55 |  Right |  333.30 |  3702.96 |* Initially input don't form a triangle<br>* Known Right Triangle<br>* Sides are not in increasing length<br>* Resultant value is longer than 2 decimal places<br>* Floating point values cannot be represented exactly<br>* Resultant values have different magnitudes to align decimal points|

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week04. Detailed instructions for doing this are posted in [Assignment 04][2].

This lab is due by September 21, 2016 08:00am.

[1]: lab3b.php
[2]: ../homework/hw4.php
  
