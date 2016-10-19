
[Source](http://eecs.mines.edu/Courses/csci261/homework/hw4.php "Permalink to CSCI 261 - Programming Concepts - Assignment 04")

# CSCI 261 - Programming Concepts - Assignment 04

This assignment is due by September 21, 2016 08:00am.

This assignment exercises your ability to use loops, and provides more experience with asking the computer to generate a pseudo-random number.

  

* * *

### Pseudo-random Numbers

* * *

Lecture 05 introduced you to your new friends **srand()** and **rand()**, and how true randomness is something difficult for a machine to simulate. While true randomness is tough, is pseudo-randomness good enough for most cases? Totally! But we want you to be aware of machine pseudo-randomness as it certainly is one aspect that separates simulation from real life. Generating a random integer is easy, just use **rand()**. But only using **rand()** means your computer will generate the same series of random numbers. For example:

```cpp
for (int i = 0; i < 4; i++) 
    cout << rand();
```

This snippet of code results in a loop that repeats four times and therefore uses the **rand()** function four times. Each time we run this program, you'll notice something interesting: it always prints the same four "random" numbers. Why? By default, **rand()** relies on some default seed value to start from, generating pseudo-random numbers from that "point" forward. Each time we re-run the program, it uses that same default seed, and therefore generates the same series of random numbers. How do we get around this? By explicitly setting the seed itself. There are two common ways for doing this: asking the user to provide a seed, and using the current time as a seed. Here's an example of asking the user:

```cpp
int seed;
cout << "Enter seed: ";
cin >> seed;
srand(seed);
// now go do something fun with rand()
```

Of course, there's nothing preventing the user from entering the same seed every time. This can be handy when you're testing your program; however, once tested, you typically want "real" pseudorandomness. In that case, use something that is always changing: time.

```cpp
#include <ctime>
...
srand( time(NULL) ); // or srand( time(0) );
// now go do something fun with rand()
```

Now we're seeding randomness using the current time, which is consistently different each time the program is run. (Notice that the **ctime** library was included.)

  

* * *

### Random Numbers Within a Range

* * *

You'll notice that **rand()** can generate some pretty large integer numbers. That's great if you want to torture your user in a number guessing game ("Guess a number between 0 and quadrillion"). But usually you'll want to ask the computer to provide a random number within a particular range. You do this by leveraging % (mod).

```cpp
rand() % 10;
```

Think about this. If we gave you any number, asked you to divide that number by 10 and tell us the remainder, that remainder will always be some number between 0 and 9, inclusively. Remember, the % operator is like asking "What is the remainder when the number on the left is divided by the number on the right?".

What if you wanted a number between -25 and 25?

```cpp
rand() % 51 - 25;
```

Hoooly mooly! Think about how that works and bring it up at the next computer programming after-party.

  

* * *

### Instructions

* * *

Your goal for this assignment is to exercise your knowledge of selection statements (`if`/`else`), looping constructs (`while` and `for`) and the use of **rand()**. Your game must adhere to the following interaction example.

```
Hold onto your pants, we're about to play guess-the-numbah!  
Pick a number between 0 and 100: 20  
Too low! Not even close!  
Pick a number between 0 and 100: 75  
Too high!  
Pick a number between 0 and 100: 63  
Too low! Oooh you're close!  
Pick a number between 0 and 100: 64  
That's right! You won the game in 4 tries.
```

Your game must use a random number between **0** and **100**, inclusively. You should only accept guesses that are within the range [**0**, **100**], showing an error message otherwise. Your game must print "Too low!" or "Too high!" relative to the target number and the players' guess. Your game must print "Oooh you're close!" _if the number guessed differs from the target by 2 or less_; and it must print "Not even close!" _if the number guessed differs from the target by a value of 20 or more_.

For example, if the target is 50 and the player enters 10, your program should print "Too low!" and "Not even close!", but if the player enters 52, your program should print "Too high!" and "Oooh you're close!". When the correct number is guessed, your program must print "You won the game in N tries" where **N** is the number of guesses the player made.

  

* * *

### Functional Requirements

* * *

  

* Define appropriate **constants** for the LOW (=0) and HIGH (=100) limits of the game.
* Also, define appropriate **constants** for the TOO_CLOSE_DIFFERENCE (=2) and TOO_HIGH_DIFFERENCE (=20) values.
* * *

### Hints

* * *

  

* As a reminder, typically code that validates user input uses the **do-while** statement.
* Define a variable to count the number of _valid_ guesses.
* Have fun!

* * *

#### Submission

* * *

Always, **always**, **ALWAYS** update the header comments at the top of your main.cpp file. And if you ever get stuck, remember that there is LOTS of [help][1] available.

In summary, for homework due on Wednesday, September 21 follow these specific steps:

* create a directory called `week04`.
* within `week04`, create three subdirectories: `Lab04A`, `Lab04B`, and `A04`.
* within your new `week04/Lab04A` directory, copy in your `main.cpp` file from your [Lab04A][2] solution.
* within your new `week04/Lab04B` directory, copy in your `main.cpp` file from your [Lab04B][3] solution.
* within your new `week04/A04` directory, copy in your `main.cpp` file from your A04 solution.
* compress the `week04` directory (see Step 3 [here][4] for details).
* submit the `week04.zip` file to Blackboard (see Steps 5-10 [here][5] for details).
* **after you submit, download the file and double check it contains all that you think it contains! **

This assignment is due by September 21, 2016 08:00am.

[1]: ../resources/help.php
[2]: ../labs/lab4a.php
[3]: ../labs/lab4b.php
[4]: ../resources/submission.php#3
[5]: ../resources/submission.php#5
  </ctime>
