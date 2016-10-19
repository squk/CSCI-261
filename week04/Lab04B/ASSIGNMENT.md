
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab4b.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 21, 2016 08:00am.

  

* * *

### Multiple Rounds of Rock, Paper, Scissors, Lizard, Spock

* * *

  

In [Assignment 03][1], you created a game of Rock, Paper, Scissors, Lizard, Spock that the user could play. Annoyingly, the user could only play one game at a time. For this lab, you will use your A03 submission or use the [Rock, Paper, Scissors code][2] and modify the contents.

Before a game begins, you should first ask the user how many rounds they would like to play. Using a `for` loop, allow the user to play _N_ rounds where _N_ is the number the user entered.

After each round, keep track if the user won, lost, or tied. After _N_ round have been played, print out the user's final stats - how many total games were won, lost, and tied with a win percentage. Consider a tie as counting as half a win and half a loss. A sample game is shown below:
```
  

How many rounds would you like to play? 4

Round #1 of 4  
Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter your choice)   
Player one: Rock   
Computer: Lizard  
Rock beats Lizard. You win!   
Your record: 1-0-0 (100.0%)

Round #2 of 4  
Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter your choice)   
Player one: Scissors   
Computer: Rock  
Rock beats Scissors. Computer wins!   
Your record: 1-1-0 (50.00%)

Round #3 of 4  
Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter your choice)   
Player one: Rock   
Computer: Lizard  
Rock beats Lizard. You win!   
Your record: 2-1-0 (66.67%)

Round #4 of 4  
Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter your choice)   
Player one: Spock   
Computer: Spock  
Spock ties Spock. It's a draw!   
Your record: 2-1-1 (62.50%)  

```

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week04. Detailed instructions for doing this are posted in [Assignment 04][3].

This lab is due by September 21, 2016 08:00am.

[1]: ../homework/hw3.php
[2]: ../resources/code/rps_main.cpp
[3]: ../homework/hw4.php
  
