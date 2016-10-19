
[Source](http://eecs.mines.edu/Courses/csci261/homework/hw2.php "Permalink to CSCI 261 - Programming Concepts - Assignment 02")

# CSCI 261 - Programming Concepts - Assignment 02

This assignment is due by September 07, 2016 08:00am.

In this homework assignment you have the opportunity to experiment with boolean expressions and conditional statements.

  

* * *

### Before you Begin Coding

* * *

It's easy for the logic in this assignment to get out of control very quickly. We strongly recommend that you sit down with a pencil and paper to sketch the flow of the logic that you'll need. Use _pseudocode_, rough flowcharts, boxes, arrows, stickmen, or whatever means you need to create a clear structure for the logic of your Rock, Paper, Scissors game.

After you have _pseudocode_ for your solution, then  create yourself an empty project. You should know how to do this by now.

  

* * *

### RPS

* * *

  

Most of you have likely played the classic game **Rock, Paper, Scissors**. Believe it or not, a [hardcore world][1] of Rock, Paper, Scissors has existed, even in [Denver][2]. It's a bit frightening.... So, before you start thinking how Rock, Papers, Scissors (or RPS for those in the know) is a [kid's][3] game, think again. This is serious stuff; go ahead and TRY to beat the computer on this [NY Times][3] link. (But, if anyone asks, your C++ homework this week is to implement a simple interactive rule-based system that addresses a theoretical [Decision Problem][4].)

![RPS Image][5]  

* * *

### Instructions: Step I

* * *

Your goal is to implement a two-player version of **Rock, Paper, Scissors**. Players will enter either **R** or **r** for rock, **P** or **p** for paper, and **S** or **s** for scissors. Your program must then simply announce the winner. Note that your program only needs to play one round of the game. We will add repetition via loops soon. Here is an example interaction:
```
Welcome one and all to a round of Rock, Paper Scissors! (Enter P, R or S)  
Player one: R  
Player two: s  
Rock beats scissors. Player one wins!
```
Here is another example:
```
Welcome one and all to a round of Rock, Paper Scissors! (Enter P, R or S)  
Player one: p  
Player two: S  
Scissors beats paper. Player two wins!
```
Your program must only prompt for two inputs. It should also print a line following this pattern:
```
X beats Y. Player Z wins!
```
Where X and Y are one of "rock" or "scissors" or "paper" and Z is either "one" or "two".

  

Yes, we (and the [RPS Society][1]) understand that this interactive game is a little silly since Player two can always see what Player one chooses. Let's fix this issue next (AFTER you have this silly initial game working).

  

* * *

### Instructions: Step II

* * *

Now that you have your RPS game working correctly, modify your code  to let the computer generate a random number for Player 2. Specifically,  generate a random number and then use `(randNumGenerated % 3)` to  generate a 0 (rock), 1  (paper), or 2 (scissors) for Player 2. (Then assign 'r',  'p', or 's' to Player 2's choice accordingly.)

Example outputs follows:
```
Welcome one and all to a round of Rock, Paper Scissors! (Enter P, R or S)   
Player one: R   
Computer: s  
Rock beats Scissors. Player one wins!   
```
Here is another example:
```
Welcome one and all to a round of Rock, Paper Scissors! (Enter P, R or S)   
Player one: R   
Computer: p  
Paper beats rock. Computer wins!   
```
The solution you submit should provide output like the last two example outputs.

  

* * *

#### Grading Rubric

* * *

Your submission will be graded according to the following rubric.

| Percentage | Requirement Description |
| --- | --- |
| 20% | Labs completed |
| 5%  | Assignment compiles |
| 60% | Human vs. Computer RPS Game is playable |
| 15% | (1) Comments used (2) Coding style followed (3) Appropriate variable names, constants, and data types used (4) Instructions followed |

  

* * *

#### Submission

* * *

Always, **always**, **ALWAYS** update the header comments at the top of your main.cpp file. And if you ever get stuck, remember that there is LOTS of [help][6] available.

In summary, for homework due on Wednesday, September 07 follow these specific steps:

* create a directory called `week02`.
* within `week02`, create three subdirectories: `Lab02A`, `Lab02B`, and `A02`.
* within your new `week02/Lab02A` directory, copy in your `main.cpp` file from your [Lab02A][7] solution.
* within your new `week02/Lab02B` directory, copy in your `main.cpp` file from your [Lab02B][8] solution.
* within your new `week02/A02` directory, copy in your `main.cpp` file from your A02 solution.
* compress the `week02` directory (see Step 3 [here][9] for details).
* submit the `week02.zip` file to Blackboard (see Steps 5-10 [here][10] for details).
* **after you submit, download the file and double check it contains all that you think it contains! **

This assignment is due by September 07, 2016 08:00am.

[1]: http://www.worldrps.com/
[2]: http://www.prlog.org/10553153-denvers-coolest-rock-paper-scissors-tournament-benefits-local-non-profit.html
[3]: http://www.nytimes.com/interactive/science/rock-paper-scissors.html?_r=0
[4]: http://en.wikipedia.org/wiki/Decision_problem
[5]: http://eecs.mines.edu/images/hw2_rps.jpg "RPS Image"
[6]: ../resources/help.php
[7]: ../labs/lab02a.php
[8]: ../labs/lab02b.php
[9]: ../resources/submission.php#3
[10]: ../resources/submission.php#5
  
