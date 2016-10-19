
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab5a.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 28, 2016 08:00am.

  

* * *

### Yahtzee Scorer

* * *

  

Today's lab is another pair programming exercise because [two heads are better than one][1].

Each pair will be given a bag of dice with a different Yahtzee scenario/category. If you are unfamiliar with the rules of Yahtzee, [here are the official Hasbro rules (.pdf)][2]. Your task is to create two different functions for each scenario. Below are each of the 13 scenarios:

| Scenario |	Description	| Points |
| --- | --- | --- |
| Ones            | Ones                                                      | Sum of Ones   |
| Twos            | Twos                                                      | Sum of Twos   |
| Threes          | Threes                                                    | Sum of Threes |
| Fours           | Fours                                                     | Sum of Fours  |
| Fives           | Fives                                                     | Sum of Fives  |
| Sixes           | Sixes                                                     | Sum of Sixes  |
| Three Of A Kind | Three dice of the same value                              | Sum of Dice   |
| Four Of A Kind  | Four dice of the same value                               | Sum of Dice   |
| Full House      | Two dice of one value and three dice of a different value | 25            |
| Small Straight  | Four dice in a row (1-4, 2-5, 3-6)                        | 30            |
| Large Straight  | Five dice in a row (1-5, 2-6)                             | 40            |
| Yahtzee         | Five dice of the same value                               | 50            |
| Chance          | Any combination of dice                                   | Sum of Dice   |

  

The first function will check if the scenario is present given the five dice after they are rolled. Create a main.cpp that prompts the user to enter the values for each of the five dice. Next write the function as described on your card above your main function. Then call your function, passing as arguments the five values the user entered. Print out the result of the function to verify your function is returning the correct value.

Once the first function is working, move on to the second function described on the card. This function will determine how many points your dice will score in the given scenario (if the scenario is present). In your program, after printing if the scenario is present or not, print out how many points the user's inputs earn.

When you have both functions working, post your functions to the pinned Piazza post for this lab. We will be gathering all 26 functions for [Lab05C][3] and [A05][4].

We recommend writing out some pseudocode for how you are going to solve these problems.

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week05. Detailed instructions for doing this are posted in [Assignment 05][4].

This lab is due by September 28, 2016 08:00am.

[1]: http://comicsalliance.com/ranger-station-episode-52-two-heads-are-better-than-one/
[2]: http://www.hasbro.com/common/instruct/Yahtzee.pdf
[3]: lab5c.php
[4]: ../homework/hw5.php
  
