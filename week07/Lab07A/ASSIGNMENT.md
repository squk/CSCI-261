
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab7a.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by October 19, 2016 08:00am.

  

* * *

### Concepts

* * *

The goal of this assignment is to gain practice with arrays: how to declare (and initialize) arrays, how to access array values, and how to store values in arrays.

  

* * *

### Collections of Things

* * *

To date, you've focused mostly on working with data one "piece" at a time. But in the real world, we're often concerned with _collections_ of data: scores, hourly air temperatures, pressure readings over time, and colors of socks. In computer science, we call these collections "data structures" -- things that contain data. Perhaps the most simple data structure is the array: a container that holds multiple instances of only one type of thing. For example, you might have an array called `scores` that contains a bunch of `ints`, or an array called `windSpeed` that contains a bunch of `doubles`, or an array called `favCharacters` that contains a bunch of `chars`.

There are a couple of "rules" you need to remember when dealing with arrays in C++.

First, arrays can only store values of _one specific type_, so you can't store both cats and dogs in the same array. Sometimes you can "bend" this rule, depending on type compatibility and coercion (e.g., you can store both `int`s and `double`s in an array of type `double`), but typically you  don't do this. Here's an example of an array of characters.

```cpp
char lettersInAlphabet[26];       // rule1: can only store char values
```

Second, arrays have a "fixed size". This means that you must tell the computer how many elements you intend to store in an array when you declare said array, and you can never store more than that number of items in the array.

```cpp
char lettersInAlphabet[26];       // rule2: can only store 26 values
```

Why does the machine need to know how many elements you intend to store in the array? In a nutshell, the machine needs to know in order to allocate enough memory for N pieces of data of a given type. In the example above, the machine needs to allocate enough memory to store 26 `char` values.

Third, you need to remember that arrays are "zero-indexed" meaning the first item in the array is "item 0" and the second is "item 1" and so on. This is important to remember, because it is easy to confuse the _size_ of the array with the _last index_ of the array. If you initialize an array like this:

```cpp
int shotsOfWheatgrassDrunkThisWeek[7];       
// rule3: what are the valid indices? 0 through 6.
```

Notice how the _size_ of the array is 7, but the last index is 6.

* * *

### C++ Array Syntax
* * *

You should have seen some examples of array syntax using [`` and `]` in class and in your zyBook activities. As such, we won't go over the syntex in detail here. However, here's a brief summary.

```cpp 
int x = 1;
int y = 2;
int z;
int scores[10];
scores[1] = 27;
scores[y] = 2;
z = scores[x] + scores[y];
cout << scores[x + 1];
```

Please pause here until you totally understand what the syntax means in the example above. How many numbers can `score` hold? 10. What are their "names"? `scores[0]` through `scores[9]`. What is the ending value of z? 29. What is printed to the screen? 2. What does the array look like in memory?

  

We suggest you review your section's lecture and zyBook reading, and come see us if you do not understand the syntax in the previous example.

  

* * *

### Arrays and Loops

* * *

Since you're aware of how to use loops and since you now know how to create arrays, you should recognize that there is a lot of hidden "power" in combining these two elements together. In fact, loops and arrays work so well together, it's rare you'll see one without the other -- they're best friends (but only friends, mind you). Let's take a look:

```cpp
const int DAYS_IN_WEEK = 7;

int shotsOfWheatgrass[DAYS_IN_WEEK] = {0, 1, 1, 1, 1, 7, 5};

for (int i = 0; i < DAYS_IN_WEEK; ++i) {
    cout << "On day " << i << " I drank "
         << shotsOfWheatgrass[i] << " shots." << endl;
}
```

Or better yet,

```cpp
const int DAYS_IN_WEEK = 7;

int shotsOfWheatgrass[DAYS_IN_WEEK] = {0, 1, 1, 1, 1, 7, 5};

for (int i = 0; i < DAYS_IN_WEEK; ++i) {
    cout << "On day " << i << " I drank " << shotsOfWheatgrass[i];
    if (shotsOfWheatgrass[i] == 1) {
        cout << " shot." << endl;
    } else {
        cout << " shots." << endl;
    }
}
```

Do you see how inside the loop, the value for `i` is used to access each value in the array?

  

* * *

### Instructions

* * *

Create a program that prompts the users for fifteen whole numbers, stores them in an array, and then prints out the contents of the array. An example interaction follows:
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
```
  

If you are unsure how to get started, here are the suggested steps:   

* Step 1: declare an array of fifteen integers (which you access with 0 to 14).
* Step 2: using a for loop, prompt the user for each number and then assign the  entered number to the _ith_ value in the array.
* Step 3: using a 2nd for loop, output the _ith_ value in the array.
* Step 4: Profit.

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week07. Detailed instructions for doing this are posted in [Assignment 07][1].

This lab is due by October 19, 2016 08:00am.

[1]: ../homework/hw7.php
  
