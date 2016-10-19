
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab2b.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 07, 2016 08:00am.

* * *

### Random Decisions

* * *

  

Today we discussed how a computer generates random numbers and how we can tell the computer to make a decision. We are now going to put both of these together for today's lab.

As stated previously, we need to seed our random number generator to provide pseudo-random numbers. Begin by prompting the user to input the value for the seed to use. This will be very helpful in testing because if the same seed is entered, then the same random number will be generated. We are then able to verify that our output is correct.

Once the random number generator (RNG) has been seeded, create a variable called `randomNumber`. Use the RNG to generate a random number that is between 0 and 99 inclusive. Output the random number to the user.

Now we are interested in which quartile of our distribution this random number falls into. Using an `if/else if/else` structure, determine which quartile the random number is in. The first quartile would be between 0-24, the second quartile would be between 25-49, third 50-74, and fourth 75-99. Print this information to the user.

A sample output is below:
```
Enter a seed for the RNG: 6  
The random number is: 42  
This is in the second quartile.
```
  

* * *

### Example Values

* * *

Here are some sample input/output values that resulted from running on the lab Visual Studio machines. Based on the seed and your specific setup, you may get a different random number. Based on the random number that results, make sure the correct quartile is listed.

| RNG Seed | Random Number | Quartile |
| --- | --- | --- |
| 6  | 58 | third  |
| 13 | 81 | fourth |
| 22 | 10 | first  |
| 1  | 41 | second |

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week02. Detailed instructions for doing this are posted in [Assignment 02][1].

This lab is due by September 07, 2016 08:00am.

[1]: ../homework/hw2.php
  
