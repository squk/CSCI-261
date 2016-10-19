
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab7b.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by October 19, 2016 08:00am.

  

* * *

### Instructions

* * *

This lab picks up right where [Lab07A][1] left off. We are going to write a function to find the largest value in an array. Create a function call `FindLargestArrayValue`. It should take an integer array as input and return a single integer value as output. Your function must not change the contents of the array. Inside your function, iterate through the array searching for the largest value in the array. Return this value. (There are hints below if you need a starting point.)

After printing out the values the user entered, call your function and print the resulting largest value.

An example interaction follows:

```
Hey! Witness my first array mojo!  
Enter 15 numbers and I will tell you what they are.  
Number 1: 8  
Number 2: 6  
Number 3: 7  
Number 4: 5  
Number 5: 3  
Number 6: 2  
Number 7: 4  
Number 8: 1  
Number 9: 3  
Number 10: 13  
Number 11: 32  
Number 12: 14  
Number 13: 25  
Number 14: 51  
Number 15: 9  
So awesome!  
The numbers are: 8 6 7 5 3 2 4 1 3 13 32 14 25 51 9  
Have a nice day!  
The largest number is: 51  
Gaze at my awesome.
```  

If you are unsure how to get started, here are the suggested steps for your function:   

* Step 1: declare a variable for the largest number, and initialize it to be the 1st value in the array.
* Step 2: using a for loop, read each array value and update the largest number variable (if appropriate). Think carefully about which two values you need to compare.
* Step 3: return the largest number.


* * *

### Functional Requirement

* * *

Your function cannot make a call to the STL Algorithm method `sort()`. You must iterate through the array searching for the largest element yourself.

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week07. Detailed instructions for doing this are posted in [Assignment 07][2].

This lab is due by October 19, 2016 08:00am.

[1]: lab7a.php
[2]: ../homework/hw7.php
  
