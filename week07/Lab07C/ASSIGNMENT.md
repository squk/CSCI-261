
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab7c.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by October 19, 2016 08:00am.

  

* * *

### Concepts

* * *

  

If you've taken linear algebra, then you know what the _transpose_ of a matrix is. If not, that's OK, as the concept is pretty simple. Basically the _transpose_ of a matrix is a new matrix where the rows become the columns and the columns become the rows (a reflection). See [Wikipedia][1] for more details.

  

* * *

### Get Started

* * *

Changing the size of an array is easier to  do when the numbers of rows and columns are specified as symbolic constants; otherwise the change requires modifications to several statements. Thus, to get started, create two global  constants NROWS and NCOLS which are assigned the values  4 and 2, respectively.

Then, in your `main()` function, declare a 2D array  that is of size NROWS and NCOLS.

  

* * *

### Transpose It!

* * *

  

In this lab, create the following four functions. Three of the four functions should have one parameter, a 2D array of size NROWSxNCOLS; the `transpose` function also needs a second 2D array parameter, of size NCOLSxNROWS.

* A function that reads values into a 2D array from user input. Please prompt the user to ask for input one row at a time. Use your constants  NROWS and NCOLS so that your program is flexible (e.g., if the constant values  for NROWSxNCOLS are changed to 6x3). Here is an example input for a matrix of 4x2:

```
Please enter 2 integers, for row 0: 5 7   
Please enter 2 integers, for row 1: 754 -34   
Please enter 2 integers, for row 2: 486763 979   
Please enter 2 integers, for row 3: 333 999
```

* A function that transposes the values in a 2D array, assigning the new matrix to the 2nd parameter passed to the function.
* Two functions that print the values in a 2D array (think about why you need TWO print functions). Output a tab between  elements in each row. Again, make your program flexible by using NROWS and NCOLS wherever appropriate.

  

In summary, your main function should:

1. call the read 2D array to input matrix values
2. call the print 2D array function with the matrix read in
3. call the transpose function with both the matrix read in and the matrix that will hold the transposed elements
4. call the print 2D array function with the transposed matrix

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week07. Detailed instructions for doing this are posted in [Assignment 07][2].

This lab is due by October 19, 2016 08:00am.

[1]: http://en.wikipedia.org/wiki/Transpose
[2]: ../homework/hw7.php
  
