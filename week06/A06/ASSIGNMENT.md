
[Source](http://eecs.mines.edu/Courses/csci261/homework/hw6.php "Permalink to CSCI 261 - Programming Concepts - Assignment 06")

# CSCI 261 - Programming Concepts - Assignment 06

This assignment is due by October 05, 2016 08:00am.

In this homework, we will combine everything we've learned so far with a focus on `struct` and `string`.

  

* * *

### Overview

* * *

For this assignment, your job is to create a simple Blackjack game where a user plays against a computerized Dealer.

  

* * *

### The Specifics

* * *

You must first create a `struct` named `Card` to represent a playing card. It should have two fields, a `rank` stored as an `int` and a `suit` stored as a `string`.

Next create a function that generates a random Card variable (perhaps call it `RandomCard`). Since this is Naïve Blackjack, we do not care if two cards are in play at once or how many of each card are available. This function should generate a random rank for the card (between 1-10) and a random suit for the card. The function should take nothing as input and return a Card as output.

  

At this point, everything is in place to start our game. Follow this pseudocode to complete the remainder of the assignment:

1. While the Player wants to play:
    2. Deal a card to the Dealer, print the card, and display the Dealer's total
    3. Deal a card to the Player, print the card, and display the Player's total
    4. While the Player's total is less than or equal to 21:
        5. Deal a card to the Player, print the card, and display the Player's total
        6. If the Player's total is greater than 21, the Player busts. Go to Step #9
        7. Ask the Player if they want to "Hit" or "Stand". The user should type in "Hit" or "Stand" and you must store their response as a `string`.
        8. If they entered "Hit", return to step #5. If they entered "Stand" go on to Step #9
    5. If Player hasn't busted and while Dealer Total is less than 17:
        10. Deal a card to the Dealer, print the card, and display the Dealer's total
    6. Determine who wins the hand based on Player total and Dealer total
    7. Ask Player if they want to play again, "Yes" or "No". Again, the user should type in "Yes" or "No" and you must store their response as a `string`.
    8. If they entered "Yes", go back to Step #2. Otherwise quit the program.

It looks like a lot of steps, but the majority of those steps are describing the rules of Blackjack. Once completed, hopefully you find this assignment enjoyable to play and try to beat the computer. Sample output and program flow could be as follows:

```
    Dealer shows the 3 of Clubs
    Dealer total is: 3
    You were dealt the 3 of Clubs
    You were dealt the 7 of Hearts
    Your total is: 10
    Do you want to "Hit", "Stand"?
    > Hit
    You were dealt the 3 of Diamonds
    Your total is: 13
    Do you want to "Hit", "Stand"?
    > Hit
    You were dealt the 6 of Spades
    Your total is: 19
    Do you want to "Hit", "Stand"?
    > Stand
    Dealer was dealt the 6 of Diamonds
    Dealer total is: 9
    Dealer was dealt the 6 of Hearts
    Dealer total is: 15
    Dealer was dealt the 7 of Spades
    Dealer total is: 22
    Dealer busted!  You win
    Do you want to play again?  "Yes" or "No"?
    > No
```

We will revisit this assignment later to make a smarter Blackjack game where our cards are correctly limited to a standard 52 card deck.

  

* * *

### Functional Requirements

* * *

  

* Do not use global variables! If you are using a global variable in multiple functions, then you should be passing that variable into the function. If you use global variables, you will lose points so get out of the global variable shorcut habit.
* You must declare a `Card` struct and use `Card` variables throughout your program and functions.
* The user must be inputting strings and you should be comparing string values.
  

* * *

### Hints

* * *

  

* You will need to use loops (perhaps `while` and/or `do-while`), branching, and functions to complete this assignment.
* Dealing a card is nothing more than calling our RandomCard function.
* This function will probably prove helpful to you:

```cpp
/*
 * Converts a number between 0 and 3 to a corresponding
 * playing card suit
 */
string ConvertIntToSuit( int suitNum ) {
    switch( suitNum ) {
    case 0:
        return "Hearts";
    case 1:
        return "Clubs";
    case 2:
        return "Diamonds";
    case 3:
    default:
        return "Spades";
    }
}
```

  

* * *


#### Submission

* * *

Always, **always**, **ALWAYS** update the header comments at the top of your main.cpp file. And if you ever get stuck, remember that there is LOTS of [help][1] available.

In summary, for homework due on Wednesday, October 05 follow these specific steps:

* create a directory called `week06`.
* within `week06`, create three subdirectories: `Lab06A`, `Lab06B`, and `A06`.
* within your new `week06/Lab06A` directory, copy in your `main.cpp` file and any other files you created (*.h, *.cpp) from your [Lab06A][2] solution.
* within your new `week06/Lab06B` directory, copy in your `main.cpp` file and any other files you created (*.h, *.cpp) from your [Lab06B][3] solution.
* within your new `week06/A06` directory, copy in your `main.cpp` file and any other files you created (*.h, *.cpp) from your A06 solution.
* compress the `week06` directory (see Step 3 [here][4] for details).
* submit the `week06.zip` file to Blackboard (see Steps 5-10 [here][5] for details).
* **after you submit, download the file and double check it contains all that you think it contains! **

This assignment is due by October 05, 2016 08:00am.

[1]: ../resources/help.php
[2]: ../labs/lab6a.php
[3]: ../labs/lab6b.php
[4]: ../resources/submission.php#3
[5]: ../resources/submission.php#5
  
