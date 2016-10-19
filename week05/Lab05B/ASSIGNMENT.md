
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab5b.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 28, 2016 08:00am.

  

* * *

### Yahtzee Dice Sorter

* * *

  

In the previous lab, checking if a Large Straight existed was certainly more difficult than checking if Chance existed. If we were able to sort our dice into increasing order, then it would be much simpler to check if our five dice have values of 1, 2, 3, 4, and 5. For today's lab we will do just that - sort our five dice into ascending order.

To accomplish this task, we are going to write two functions. The first function should be called `SwapDice`. This function will take two integer parameters both passed by reference. The function returns nothing. The function will then compare the values of the two parameters (we'll call them a &amp; b - you should use a more descriptive name). We need to swap the value of the two parameters so that a will have b's old value and b will have a's old value. Jump ahead to zyBooks Section 5.11 if you need some tips on swapping two variables.

The second function should be called `SortDice`. This function will take five integer parmaeters all passed by reference. The function returns nothing. We now need to determine the smallest value of the five dice and keep track of which die contains the smallest value. Once we have this information, we will swap the smallest die with die1. This will put the smallest value die into the first position of all our dice. We then repeat this process with the four remaining dice. Find the smallest value of the four dice and swap it with die2. At this point, die1 will be the smallest value and die2 will be the second smallest. Repeat this process for the third smallest and fourth smallest. Whichever die is left in position die5 will be the largest!

Add these two functions to your main.cpp from [Lab05A][1]. After the user has entered their five dice, call the `SortDice` function and then print the values of die1, die2, die3, die4, and die5 to verify that they are in ascending order.

We recommend writing out some pseudocode for how you are going to solve these problems - particularly sorting the five dice.

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week05. Detailed instructions for doing this are posted in [Assignment 05][2].

This lab is due by September 28, 2016 08:00am.

[1]: lab5a.php
[2]: ../homework/hw5.php
  
