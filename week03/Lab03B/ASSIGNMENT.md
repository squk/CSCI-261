
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab3b.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 14, 2016 08:00am.

  

* * *

### Triangle Classifier + Options Menu
* * *

The goal of this lab is to practice the use of the switch statement. Your solution will be submitted with Week03 next Wednesday.

  

* * *

### Let's Start

* * *

  

For this lab, we are providing you with some initial code. First create yourself an empty project, and then add a new C++ source file called `main.cpp`. In your `main.cpp`, copy/paste the code that is available [here][1].

  

* * *

### Instructions

* * *

  

In [Lab 03A][2] you created a program that classifies triangles based on three side measurements provided by the user. For Lab 03B, you need to offer to the user the following menu of options:
```
1. Enter measurements  
2. Print measurements  
3. Check triangle feasibility  
4. Classify triangle  
5. Print triangle perimeter  
6. Print triangle area  
7. Print triangle summary  
8. Exit
```
  

The initial code provided in the [Lab03B_main.cpp file][1] does several tasks for you: (1) reads the user's choice, (2) verifies that the chosen option is a number between 1 and 8, and (3) quits the execution of the program if the user chooses option 8 (exit). The initial code provided also includes a `do-while` loop, which is a C++ repetition statement that we will cover next week; just leave this code alone for now. Your task is to add code to this initial program that implements each of these menu options, which are explained in more detail below. NOTE: a good chunk of the code you wrote for [Lab 03A][3] is useful for this lab; feel free to cut/paste what you have already written (if useful).

  

* * *

#### Option 1: Enter Measurements

* * *

Ask the user to enter three real value measurements (i.e., &gt; 0). Read these measurements using the already declared variables named **inputA**, **inputB**, and **inputC**. If any of the measurements provided by the user is invalid (i.e., &lt;= 0), then print an error message and immediately quit the entire program (return 0). If all three measurements are valid, copy the variables to the already declared variables named **a**, **b**, and **c**, such that **c** is the largest. Once done, set the boolean variable **isTriangle** to **false**, as you have yet to test whether the measurements provided form a triangle.

  

* * *

#### Option 2: Print Measurements

* * *

In this option, you should print the measurements (i.e., variables **a**, **b**, and **c**) in ascending order.

  

* * *

#### Option 3: Check Triangle Feasibility

* * *

For this option, you should check whether the input provided forms a triangle. Depending on your calculation, you should set the boolean variable **isTriangle** to be **true** or **false**.

  

* * *

#### Option 4: Classify Triangle

* * *

  

You should classify a triangle IF (and only if) a triangle exists (i.e., **isTriangle** is **true**). If this boolean variable is **true**, tell the user whether the triangle is a right, acute, or obtuse triangle. Otherwise, politely remind them that a triangle does not exist. (Hint: reuse your [Lab03A][4] code)

  

* * *

#### Option 5: Print triangle perimter

* * *

You should compute the perimeter of a triangle IF (and only if) a triangle exists. If a triangle exists, tell the user the perimeter of the triangle. Otherwise, politely remind them that a triangle does not exist.

  

* * *

#### Option 6: Print triangle area

* * *

You should compute the area of a triangle IF (and only if) a triangle exists. If a triangle exists, tell the user the area of the triangle. Otherwise, politely remind them that a triangle does not exist. (Hint: use the Information Superhighway to find a formula for calculating the area of a triangle given the length of its sides.)

  

* * *

#### Option 7: Print triangle summary

* * *

You should print the triangle summary IF (and only if) a triangle exists. If a triangle exists, tell the user all of the above information in one condensed format. Otherwise, politely remind them that a triangle does not exist. Your output should look as follows:
```
Triangle sides: 3  
4  
5  
Classification: Right Triangle  
Perimeter: 12  
Area: 6  
```

* * *

#### Option 8: Exit

* * *

Duh - exit!

  

* * *

### Program Use

* * *

A smart user of this program will first choose Option 1 (to enter measurements), then Option 2 (to verify measurements entered are correct), then Option 3 (to check whether the measurements form a triangle), then Option 4 (to classify the triangle), then Option 5 (to print the perimeter), then Option 6 (to print the area), then Option 7 (to print a summary) and then Option 8 (to quit). Unlike the real world, you can assume only smart users of your program exist.

  

* * *

### Test Values

* * *

Here are some known input/output values that you can test against. **Be sure to try your own to verify the code works!**

  
| Inputs |	Classification |	Perimeter |	Area	| Purpose of Test |
| --- | --- | --- | --- | --- |
| 3 5 4                           | Right  | 12 | 6      | Known Right Triangle  
Sides are not in increasing order |
| 13 12 5                         | Right  | 30 | 30     | Known Right Triangle  
Sides are not in increasing order |
| 5 5 9                           | Obtuse | 19 | 9.8075 | Known Obtuse Triangle    |
| 5 5 1                           | Acute  | 11 | 2.4875 | Known Acute Triangle  <br>Sides are not in increasing order  <br>Two sides share the longest length |
| 1 1 1 |  Acute |  3 |  0.433 |  Known Acute Triangle  <br>All sides share the longest length |
| 1 2 3 |  Not a Triangle |  Not a Triangle |  Not a Triangle |  Invalid triangle. `a + b > c` fails |
| 3 4 0 |   |   |   |  Invalid triangle. One side has a zero length |
| -3 -4 -5 |   |   |   |  Invalid triangle. All sides have negative lengths (even though a<sup>2</sup> + b<sup>2</sup> = c<sup>2</sup> would still hold.) |

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week03. Detailed instructions for doing this are posted in [Assignment 03][5].

This lab is due by September 14, 2016 08:00am.

[1]: ../resources/code/lab03b_main.cpp
[2]: lab03A.html
[3]: lab03A.php
[4]: lab3a.php
[5]: ../homework/hw3.php
  
