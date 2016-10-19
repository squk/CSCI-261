
[Source](http://eecs.mines.edu/Courses/csci261/homework/hw7.php "Permalink to CSCI 261 - Programming Concepts - Assignment 07")

# CSCI 261 - Programming Concepts - Assignment 07

This assignment is due by October 19, 2016 08:00am.

  

* * *

### Concepts

* * *

In this homework, we will use an array to create a standard deck of 52 playing cards. Our Blackjack game will become much more realistic now.

  

* * *

### Overview

* * *

  

For this assignment, your job is to modify the simple Blackjack game from [A06][1]. You may use your prior submission as a starting point.

  

* * *

### The Specifics

* * *

  

In [A06][1], every time we needed a card, we randomly generated one. With the power of arrays, we can do better than that!

Before gameplay starts, create an array of Cards that has a size of 52. Populate the array with all 52 card values (Ace of Hearts through King of Spades).

Modify (or create) your `PrintCard()` function so that it will print "Ace", "Jack", "Queen", or "King" in place of 1, 11, 12, and 13 respectively.

At this point, print all cards in your array to ensure you have all 52 cards represented. Once you are satisfied all 52 cards are there, comment out these print statements.

Now, for the most important part, create a function called `ShuffleDeck` that takes an array of cards and the size of the array as input. This function randomly selects two cards from the deck and swaps them. This operation should be performed enough times to ensure the entire deck is thoroughly shuffled. To verify the cards have been shuffled, again print all cards in your array. If you are happy with the randomness of the card order, comment out these print statements as well.

Ready to implement "real" Blackjack?? (or at least Blackjack simulated in Visual Studio?) First, remove the `RandomCard()` function. Second, create a function called `GetNextCard` that takes the array of cards, the size of the array, and a `currentCardIndex` (integer) as input. The function should return a Card as output. The `currentCardIndex` keeps track of our place in the deck and the card we should deal next. Naturally, it's initial value should correspond to the "top" of the deck, and the function should return the card at the current position in the deck (i.e., the "top" card in the deck). The function then needs to advance our current card index; that is, since we've now "dealt" this card, we don't want to deal it again! Hmm, how should we pass the `currentCardIndex` parameter to this function then?

One issue you may have pondered ... what happens if you play  several rounds and the deck runs out of cards? There are issues with re-shuffling the deck since we are not tracking the cards currently in play. Thus, instead, we sugget you add code  to re-shuffle the deck if the deck is  "low" on cards. Specifically, when a user requests another game of Blackjack, re-shuffle the deck  if the `currentCardIndex` indicates there are less than 20 cards in the deck.

  

The final change is to replace every instance of `RandomCard()` with `GetNextCard()`. And then enjoy your better smarter Blackjack!

Also note that you now have the starting point to create any card based game (war, poker, go fish, etc.). Hmmm ... could be useful for your final project?

  

* * *

### Extra Credit!

* * *

For the first extra credit part, allow an Ace to count as 1 or 11. That is, if the user has an Ace and a Nine, then his/her total should show as 20. If the user chooses to hit and is dealt a 5, then his/her total should become 15. Implementing this correctly will earn you 3 extra points.

For the second extra credit part, if either player is dealt a Blackjack (Ace + 10 or Face Card), then the hand should instantly end. Implementing this correctly will earn you 2 extra credit points.

  

* * *

### Functional Requirements

* * *

  

* You MUST use a 1D array to store the deck of cards.
* The only global variable you may use is a constant to track the size of your deck.
* * *

### Hints

* * *

  

* While it is possible to copy and paste a few lines of code (over and over) to generate all 52 cards, it will become quite tedious and you won't enjoy making sure all 52 cards are represented. You will find it much easier to use two nested for loops to accomplish this task.
* zyBooks Section 5.11 will be helpful for your shuffling function.
* If you plan to do the first extra credit, you may want to create a variable called `currentHand`. This variable could be an array of size X, where X is the largest possible number of cards a given hand could have. It may, however, be smarter to use a vector. (While we have not yet covered  vectors in class, zyBooks discusses vectors extensively, i.e., 5.15-5.24). If you have a variable called `currentHand`, then an Ace can  initially be set as 11 and then later downgraded to a 1. If you do this extra credit, be sure you handle a hand consisting of "A A J 7" (which should total 19).
  

* * *

#### Submission

* * *

Always, **always**, **ALWAYS** update the header comments at the top of your main.cpp file. And if you ever get stuck, remember that there is LOTS of [help][2] available.

In summary, for homework due on Wednesday, October 19 follow these specific steps:

* create a directory called `week07`.
* within `week07`, create four subdirectories: `Lab07A`, `Lab07B`, `Lab07C`, and `A07`.
* within your new `week07/Lab07A` directory, copy in your `main.cpp` file and any other files you created (*.h, *.cpp) from your [Lab07A][3] solution.
* within your new `week07/Lab07B` directory, copy in your `main.cpp` file and any other files you created (*.h, *.cpp) from your [Lab07B][4] solution.
* within your new `week07/Lab07C` directory, copy in your `main.cpp` file and any other files you created (*.h, *.cpp) from your [Lab07C][5] solution.
* within your new `week07/A07` directory, copy in your `main.cpp` file and any other files you created (*.h, *.cpp) from your A07 solution.
* compress the `week07` directory (see Step 3 [here][6] for details).
* submit the `week07.zip` file to Blackboard (see Steps 5-10 [here][7] for details).
* **after you submit, download the file and double check it contains all that you think it contains! **

This assignment is due by October 19, 2016 08:00am.

[1]: hw6.php
[2]: ../resources/help.php
[3]: ../labs/lab7a.php
[4]: ../labs/lab7b.php
[5]: ../labs/lab7c.php
[6]: ../resources/submission.php#3
[7]: ../resources/submission.php#5
  
