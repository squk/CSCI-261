
[Source](http://eecs.mines.edu/Courses/csci261/homework/hw3.php "Permalink to CSCI 261 - Programming Concepts - Assignment 03")

# CSCI 261 - Programming Concepts - Assignment 03

This assignment is due by September 14, 2016 08:00am.

In this homework assignment you have the opportunity you will continue to use boolean expressions and conditional statements.

  

* * *

### Before you Begin Coding

* * *

  

You may want to use your [A02][1] solution as the starting point for this assignment or you can start from scratch. Alternatively if you feel you struggled with the last assignment and need a strong starting point, then we have provided a working solution to [A02][1] that you may use as a starting point for this assignment - access the code [here][2].

It's easy for the logic in this assignment to get out of control very quickly. We strongly recommend that you sit down with a pencil and paper to sketch the flow of the logic that you'll need. Use _pseudocode_, rough flowcharts, boxes, arrows, stickmen, or whatever means you need to create a clear structure for the logic of your Rock, Paper, Scissors, Lizard, Spock game.

After you have _pseudocode_ for your solution, then  create yourself an empty project. You should know how to do this by now.

  

* * *

### RPSLS

* * *

  

Most of you have likely played the classic game **Rock, Paper, Scissors** but you can thank Sheldon for popularizing [Rock, Paper, Scissors, Lizard, Spock][3]. Feel free to [practice a few games][4] to fully understand what beats what. Below is the logic. An arrow points from X to Y following the "X beats Y" pattern. You will notice there are more ways to win or lose and a smaller possibility to tie.

  
![RPSLS Image][5]  

* * *

### Instructions

* * *

Your goal is to implement a Human-vs-Computer version of Rock, Paper, Scissors, Lizard, Spock. The Human Player will now enter a `string` of either "**Rock**" or "**Paper**" or "**Scissors**" or "**Lizard**" or "**Spock**".

The computer will generate a random number to make its decision. Specifically, generate a random number and then use `(randNumGenerated % 5)` to generate a 0 (Rock), 1 (Paper), 2 (Scissors), 3 (Lizard), or 4 (Spock) for the computer. Then assign "Rock", "Paper", "Scissors", "Lizard", or "Spock" to the computer's choice accordingly.

Once each player has made a decision, print out who wins or if the game is a tie.

Example outputs follows:
```
Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter your choice)   
Player one: Rock   
Computer: Lizard  
Rock beats Lizard. You win!   
```
Here is another example:
```
Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter your choice)   
Player one: Rock   
Computer: Spock  
Spock beats Rock. Computer wins!   
```
Here is a final example:
```
Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter your choice)   
Player one: Scissors  
Computer: Scissors  
Scissors tie Scissors. Nobody wins.   
```
The solution you submit should provide output like the last three example outputs.

  

* * *

#### Functional Requirements

* * *

Your solution must contiain the following features in your code:

* You MUST store the Human and Computer choice as a `string`. When determining who wins, you MUST compare `string`s.
* When assigning the computer's choice of Rock, Paper, Scissors, Lizard, Spock you MUST use a switch statement to determine the assignment.
* You MUST use an `if`/`else if`/`else` structure to determine who wins the game. You may use as many `else if`s as you need. You WILL lose points for using multiple `if` statements to determine who wins. If this is unclear, ask on Piazza.
  

Lastly a hint and some motivation. There are many more combinations that need to be checked in this version than in RPS. There are likewise many more ways to determine who wins a game. The logic operators will be very useful to simplify making comparisons to determine who wins.

**For extra credit**: You will receive 2 bonus points if your logic solution uses a single `if`, `else if`, and `else` structure to determine who wins. That is your solution would fit the following format and the output is always correct regardless of choices:
```cpp
    if( /* condition1 */ ) {
        // something happens
    } else if( /* condition2 */ ) {
        // or something else happens
    } else {
        // otherwise this happens
    }
```

* * *

#### Submission

* * *

Always, **always**, **ALWAYS** update the header comments at the top of your main.cpp file. And if you ever get stuck, remember that there is LOTS of [help][6] available.

In summary, for homework due on Wednesday, September 14 follow these specific steps:

* create a directory called `week03`.
* within `week03`, create four subdirectories: `Lab03A`, `Lab03B`, `Lab03C` and `A03`.
* within your new `week03/Lab03A` directory, copy in your `main.cpp` file from your [Lab03A][7] solution.
* within your new `week03/Lab03B` directory, copy in your `main.cpp` file from your [Lab03B][8] solution.
* within your new `week03/Lab03C` directory, copy in your `main.cpp` file from your [Lab03C][9] solution.
* within your new `week03/A03` directory, copy in your `main.cpp` file from your A03 solution.
* compress the `week03` directory (see Step 3 [here][10] for details).
* submit the `week03.zip` file to Blackboard (see Steps 5-10 [here][11] for details).
* **after you submit, download the file and double check it contains all that you think it contains! **

This assignment is due by September 14, 2016 08:00am.

[1]: hw2.php
[2]: ../resources/code/rps_main.cpp
[3]: http://www.samkass.com/theories/RPSSL.html
[4]: http://www.freearcade.com/RockPaperScissorsLizardSpock.flash/RockPaperScissorsLizardSpock.html
[5]: http://eecs.mines.edu/images/hw3_rpsls.jpg "RPSLS Image"
[6]: ../resources/help.php
[7]: ../labs/lab3a.php
[8]: ../labs/lab3b.php
[9]: ../labs/lab3c.php
[10]: ../resources/submission.php#3
[11]: ../resources/submission.php#5
  
