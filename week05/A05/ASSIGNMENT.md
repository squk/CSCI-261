
[Source](http://eecs.mines.edu/Courses/csci261/homework/hw5.php "Permalink to CSCI 261 - Programming Concepts - Assignment 05")

# CSCI 261 - Programming Concepts - Assignment 05

This assignment is due by September 28, 2016 08:00am.

  

This assignment exercises your ability to use functions in conjunction with everything else we learned to this point. You will make a very very simple Yahtzee game. (Don't worry. We will revisit this again later on and beef it up to make it 2 player).

As you progress through the assignment and are creating new functions, be sure to test that the function is doing what you expect it to. In Test-Driven Development (TDD), you would create your function header and an empty function body. Then you would write a test that would pass if the function was working - but we know it will initially fail, the function does nothing! Now go back and implement the function. You know your function is working when your test passes. In reality, we probably want to be writing several tests for a single function that are testing potential error points as well as proper operation. The potential error points will come from looking at our boundary conditions and edge cases. What is the range of expected input? Write tests to check the function output when our input is within this range, equal to the extreme of our range, outside our range, and any other special condition scenarios.

  

* * *

### Rolling the Dice

* * *

  

A key part of playing Yahtzee is the joy of shaking the dice, rolling them on the table, and listening to them rattle. While we can't simulate this joy virtually (yet! we will eventually add graphics and you can explore audio later on), we still need to mimic the randomness of rolling the dice. This should be a giant red flag to you that you will need to use your friend **rand()**. You will need to write two functions to accomplish rolling the dice.

The first function should be called `RollDie` (singular). This function takes nothing as input. The function returns an integer. This function should return a random value between 1 and 6 inclusive simulating rolling a single die.

The second function should now be called `RollDice` (plural). This function will take five integer parameters passed by reference and five boolean parameters passed by value for a total of 10 parameters. The function returns nothing. The five integer parameters correspond to our five dice. The five boolean parameters are flags indicating which dice are being "held" and therefore should NOT be rolled. Each of the five booleans corresponds to an individual die. The function should then use your `RollDie` function to roll only the dice that are not being held as indicated by the boolean flags.

  

* * *

### Printing the Scorecard

* * *

  

When the player rolls the dice, we need to inform the player what the results of their dice are. We will accomplish this by printing out the score card showing all previously earned points and points to be earned from this roll. We will use another function to accomplish this task.

The function name is simply `PrintScorecard`. The function will take eighteen (18!) integers are input - ALL passed by value. The function returns nothing. The first five parameters correspond to our five rolled dice. The next thirteen parameters are the individual scores for each scenario. We need to pass in the results of our previous rounds to update our grand totals. This means we'll need to be keeping track of each scenario's score in our main function. The function should now print a table listing each scenario and either the points earned in a previous round OR the points to be earned based on the current roll. We recommend setting each scenario score equal to some special value that indicates the scenario has not yet been scored. (Hint: zero is not a good choice) It is up to you how to best format the table, one such example is below. In this example, right aligned numbers are previously scored and left aligned numbers are the current roll.

  

* * *

### Playing the Game!

* * *

  

We now have everything ready to play the game! You will need to implement the following pseudocode to create your game:

1. While there are still scenarios to score
    2. While the player has not rolled three times
        3. Roll all dice not currently being held by player
        4. Print the score card displaying potential point totals
        5. Ask the user which dice they want to hold
    3. Ask the user which scenario they would like to score and update the score
2. Print final score card with end game total
3. Optional: Ask user if they want to play again. If yes, return to Step 1
An example from the middle of a game is shown below.

```
    Roll #2
    You rolled: 6 3 1 4 5
    |-------------------|--------|

    | Scenario          | Score  |
    |-------------------|--------|
    | (1) Ones          |  1     |
    | (2) Twos          |      8 |
    | (3) Threes        |  3     |
    | (4) Fours         |     12 |
    | (5) Fives         |     20 |
    | (6) Sixes         |  6     |
    |-------------------|--------|
    | Upper Total       |   46   |
    | Bonus             |    0   |
    |-------------------|--------|
    | (7) Three Kind    |     21 |
    | (8) Four Kind     |      0 |
    | (9) Full House    |  0     |
    | (a) S Straight    | 30     |
    | (b) L Straight    |     40 |
    | (c) Yahtzee       |      0 |
    | (d) Chance        |     17 |
    |-------------------|--------|
    | Lower Total       |  108   |
    |-------------------|--------|
    | Grand Total       |  154   |
    |-------------------|--------|

    Do you want to hold die 1? Y
    Do you want to hold die 2? Y
    Do you want to hold die 3? N
    Do you want to hold die 4? Y
    Do you want to hold die 5? Y

    Roll #3
    You rolled: 6 3 3 4 5
    |-------------------|--------|

    | Category          | Score  |
    |-------------------|--------|
    | (1) Ones          |  0     |
    | (2) Twos          |      8 |
    | (3) Threes        |  6     |
    | (4) Fours         |     12 |
    | (5) Fives         |     20 |
    | (6) Sixes         |  6     |
    |-------------------|--------|
    | Upper Total       |   46   |
    | Bonus             |    0   |
    |-------------------|--------|
    | (7) Three Kind    |     21 |
    | (8) Four Kind     |      0 |
    | (9) Full House    |  0     |
    | (a) S Straight    | 30     |
    | (b) L Straight    |     40 |
    | (c) Yahtzee       |      0 |
    | (d) Chance        |     17 |
    |-------------------|--------|
    | Lower Total       |  108   |
    |-------------------|--------|
    | Grand Total       |  154   |
    |-------------------|--------|

    Select which category to score: a

    Roll #1
    You rolled: 3 6 2 2 5
```

It is up to you if you want to implement the Bonuses for the Upper Total and multiple Yahtzees. Neither are required but will round out your game like it is actually played.

  

* * *

### Functional Requirements

* * *

  

* `RollDie()` function implemented correctly.
* `RollDice()` function implemented correctly.
* `PrintScorecard()` function implemented correctly.
* Game flow follows pseudocode from above.
  

* * *

### Hints

* * *

  

* You're going to need the 26 functions from [Lab05A][1].
* Nested loops will help with the game play. What type of loop would be most appropriate for the outer and inner loop?
* There is a PERFECT place to use a switch statement in the program.
  

* * *

#### Submission

* * *

Always, **always**, **ALWAYS** update the header comments at the top of your main.cpp file. And if you ever get stuck, remember that there is LOTS of [help][2] available.

In summary, for homework due on Wednesday, September 28 follow these specific steps:

* create a directory called `week05`.
* within `week05`, create four subdirectories: `Lab05A`, `Lab05B`, `Lab05C`, and `A05`.
* within your new `week05/Lab05A` directory, copy in your `main.cpp` file from your [Lab05A][1] solution.
* within your new `week05/Lab05B` directory, copy in your `main.cpp` file from your [Lab05B][3] solution.
* within your new `week05/Lab05C` directory, copy in your `YahtzeeFunctions.h`, `YahtzeeFunctions.cpp`, and `main.cpp` files from your [Lab05C][4] solution.
* within your new `week05/A05` directory, copy in your `main.cpp` file and any other files you created (*.h and *.cpp) that are required by your program from your A05 solution.
* compress the `week05` directory (see Step 3 [here][5] for details).
* submit the `week05.zip` file to Blackboard (see Steps 5-10 [here][6] for details).
* **after you submit, download the file and double check it contains all that you think it contains! **

This assignment is due by September 28, 2016 08:00am.

[1]: ../labs/lab5a.php
[2]: ../resources/help.php
[3]: ../labs/lab5b.php
[4]: ../labs/lab5c.php
[5]: ../resources/submission.php#3
[6]: ../resources/submission.php#5
  
