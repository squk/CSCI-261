
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab5c.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 28, 2016 08:00am.

  

* * *

### Yahtzee Function Files

* * *

  

In class today, we discussed function prototypes and function definitions. We also discussed how these pieces can be located in separate files. For this lab, we will create additional files beyond main.cpp.

Once we have all of our Yahtzee functions defined and implemented, we will run them through a series of unit tests. Unit Tests are simple functions to check if a known input to a function produces the known output. When we've uploaded our code to zyBooks for testing, this was doing unit testing.

We are interested in all 26 Yahtzee functions from [Lab05A][1] plus the 2 functions from [Lab05B][2]. We are going to place these 28 functions into two new files called `YahtzeeFunctions.h` and `YahtzeeFunctions.cpp`.

  

* * *

### YahtzeeFunctions.h

* * *

  

Create a new project for this lab and copy into main the contents of the [unit test file][3]. DO NOT MODIFY THIS FILE! If you try to build the program immediately, you will get an error that YahtzeeFunctions.h cannot be found. Let's resolve this error by creating a new header file named YahtzeeFunctions.h. Be sure you add the following line to guard against our file from being included multiple times in our project.

```cpp
#pragma once
```
  

We can try rebuilding but we will now get a full host of errors stating that SortDice(), IsOnes(), etc. cannot be found. These errors are expected because in our project we have not defined these functions anywhere yet. Let's fix this.

Inside of YahtzeeFunctions.h, let's put our function prototypes. You will need the 26 functions from Lab05A that have been posted to Piazza by you and your fellow classmates. You also need the 2 functions from Lab05B that you wrote. Inside our header file we want JUST the function prototypes, i.e. the function headers, and none of the function bodies. When we have all 28 in place we can try to rebuild again.

More errors! These are different from our previous errors though. When the function was not defined, that was a compiler error. The compiler was saying "I don't have any information about this function, I have not seen it before." Now the message "Undefined symbols" is a linker error since the function is not implemented. The linker is saying "I know this function exists, but I don't know what it does." Let's add our function implementations and get rid of all these errors for good.

  

* * *

### YahtzeeFunctions.cpp

* * *

  

Create a second source file for this project and name it YahtzeeFunctions.cpp. We'll want to start off by including our Yahtzee header file so our file knows of all the function definitions. We now want to add all of the function definitions for our 28 functions to this file. When all 28 function bodies are added, we can rebuild the project and should proceed to execution without error.

If all of your functions are correct, you should see as the last line:

```
95 / 95 (100.000%) Tests Passed
```

If you see a number less than 95 / 100%, then you can scroll up to see which test failed and which function needs to be corrected. You know all your functions are working when you pass all 95 tests. (Hint: pulling the functions directly off my Piazza post - there will be some build errors and not all tests will pass...you'll need to fix those cases.) Between Lab05A and Lab05C, we have crowd sourced / distributed the work that needed to be done to get all of our Yahtzee scenarios implemented.

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week05. Detailed instructions for doing this are posted in [Assignment 05][4].

This lab is due by September 28, 2016 08:00am.

[1]: lab5a.php
[2]: lab5b.php
[3]: ../resources/code/lab05c_main.cpp
[4]: ../homework/hw5.php
  
