
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab3c.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by September 14, 2016 08:00am.

  

* * *

### Triangle Classifier + Options Menu + Pretty Output
* * *

The goal of this lab is to practice the use of the IO Manipulators . Your solution will be submitted with Week03 next Wednesday.

  

* * *

### Let's Start

* * *

  

For this lab, you will continue with your solution from [Lab03B][1]. Make a copy of your solution and use it for your Lab03C solution.

  

* * *

### Instructions

* * *

  

Our solution to [Lab03B][1] works fine, but the output is messy - especially any time we need to print numbers. You will need to use the `iostream` manipulators to display all double values with two decimal places.

Additionally, we are going to clean up our summary print out so it looks like a table. We want all of our labels to be right aligned with the colon. We also want to have all of our decimal points aligned for easy comparison. Assume the area of the triangle will be less than 10,000.

  
```
    Triangle sides:    5.55
                      13.32
                      14.43
    Classification: Right Triangle
         Perimeter:   33.30
              Area:   36.96
```
Here is another example:

```
    Triangle sides:   55.55
                     133.32
                     144.43
    Classification: Right Triangle
         Perimeter:  333.30
              Area: 3702.96

 ``` 
  

* * *

### Test Values

* * *

Here are some known input/output values that you can test against. **Be sure to try your own to verify the code works!**

  
| Inputs |	Classification |	Perimeter |	Area |	Purpose of Test |
| --- | --- | --- | --- | --- |
| 14.43 13.32 5.55 | Right | 33.30 | 36.96 | * Known Right Triangle<br>* Sides are not in increasing length<br>* Resultant value is longer than 2 decimal places<br>* Floating point values cannot be represented exactly|
| 144.43 133.32 55.55 |  Right |  333.30 |  3702.96 | * Known Right Triangle<br>* Sides are not in increasing length<br>* Resultant value is longer than 2 decimal places<br>* Floating point values cannot be represented exactly<br>* Resultant values have different magnitudes to align decimal points |
  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week03. Detailed instructions for doing this are posted in [Assignment 03][2].

This lab is due by September 14, 2016 08:00am.

[1]: lab3b.php
[2]: ../homework/hw3.php
  
