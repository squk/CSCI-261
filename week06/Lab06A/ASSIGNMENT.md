
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab6a.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by October 05, 2016 08:00am.

  

* * *

### Introduction to Linear Algebra

* * *

  

For this lab we will get a very basic introduction to linear algebra in order to do some simple vector math. In linear algebra, we have a `Point` to represent a location in space and a `Vector` to represent a direction and distance. Linear algebra allows us to add a `Vector` to a `Point` to move that `Point` through space.

For instance, if we had a `Point p` at location (2, 3) and a `Vector v` with orientation &lt;5, 1&gt; we can add `v` to `p` to get a new `Point` located at (7, 4). We are going to create structs to define a container to store the information for a `Point` and a `Vector`. Then we will write a few functions to implement our basic vector math.

  

* * *

### Creating our `struct`s

* * *


We are going to be using these `struct`s and functions in [Lab 06B][1] and a future lab in a few weeks so you may want to consider defining these in a separate file. It is not necessary, but may save you some copy and paste later on.

First create a `struct` named `Point` that contains two doubles corresponding to the x and y location in cartesian space. In your `main()` function, create a `Point` variable and ask the user to enter the x and y coordinate of our point. You should be entering storing the user's response directly into the `Point` variable's data members. Print out the variable's data members to verify the values were stored correctly. Your program should look as follows at this point:

  
```
    Enter the Point's x-coordinate: 2
    Enter the Point's y-coordinate: 3
    The point is (2, 3)
```
  

Printing a `Point`'s value is an action we will wanting to be doing very often, so it makes sense to move that into a function (remember the DRY principle?). Create a function called `PrintPoint` that accepts a `Point` parameter passed by value and has no output. This function should now do the print the `Point`'s location in a pretty manner.

Let's go ahead and repeat the above steps for our second `struct`, this time called `Vector`. The `Vector` struct should again have two double data members corresponding to the x and y directions in cartesian space. (Yes, the `Vector struct` will look _very similar_ to the `Point struct`). Create a function called `PrintVector` accepts a `Vector` parameter passed by value and has no output. This function should prettily print the `Vector` direction. Ask the user to enter the `Vector`'s direction and print out the values to verify. Your program should look as follows at this point:

  
```
    Enter the Point's x-coordinate: 2
    Enter the Point's y-coordinate: 3
    The point is (2, 3)
    Enter the Vector's x-direction: 5
    Enter the Vector's y-direction: 1
    The vector is <5, 1>
```

If the `Point` and `Vector` are so similar, then why do we want both? We need both so we can properly implement our vector math. In vector math, you can add (1) two vectors together or (2) a vector and a point, but you cannot add two points together. Creating these two new data types will help us enforce these rules. So let's do a little basic vector math.

  

* * *

### Vector Math

* * *

The first vector math operation we want to support is adding a `Vector` to a `Point`. Create a function named `MovePoint` that takes a `Point` passed by value and a `Vector` passed by value as input. This function should return a `Point` as output. Inside the function, it should create a new `Point` and set its x component equal to the sum of the `Point` x-coordinate and the `Vector` x-direction. Do the same thing for y. Then return this new `Point`. In your `main()`, call this function with the values the user entered. Print out the resultant `Point`. Your program should look as follows at this point:

  
```
    Enter the Point's x-coordinate: 2
    Enter the Point's y-coordinate: 3
    The point is (2, 3)
    Enter the Vector's x-direction: 5
    Enter the Vector's y-direction: 1
    The vector is <5, 1>
    After adding the vector to the point
    The point is (7, 4)
```

Our last vector math operation will allow us to rotate a `Vector` by some angle. Create a function called `RotateVector` that takes a `Vector` passed by value and a double variable (representing the angle) passed by value. This function should return a `Vector` as output. Inside the function, it should create a new `Vector` and have it's x and y components set according to the following equations:

  
![vector rotation equation][2]

Then return this new `Vector`. In your `main()`, ask the user to enter an angle and then call this function with the values the user entered. Print out the resultant `Vector`. Your program should look as follows at this point:

  
```
    Enter the Point's x-coordinate: 2
    Enter the Point's y-coordinate: 3
    The point is (2, 3)
    Enter the Vector's x-direction: 5
    Enter the Vector's y-direction: 1
    The vector is &lt;5, 1&gt;
    After adding the vector to the point
    The point is (7, 4)
    Enter an angle of rotation: 1.57
    The vector is <-0.996, 5.001>
```

And you're done!

  

* * *

### Test Values

* * *

Here are some known input/output values that you can test against. **Be sure to try your own to verify the code works!** After our discussion following the coding quiz, think about the boundary conditions and edge cases that may arise.

  
| Inputs |	Addition Result |	Rotation Result |	Purpose of Test |
| --- | --- | --- | --- |
| 2 3  <br>5 1  <br>1.57 |  (7.000, 4.000) |  <-0.996, 5.001> |  Standard addition. Corresponds to rotation of 90 degrees |
| 0 0  <br>1 1  <br>0.524 |  (1.000, 1.000) |  <0.365, 1.366> |  Moves point away from origin. Corresponds to rotation of 30 degrees |
| 1 1  <br>0 0  <br>3.14 |  (1.000, 1.000) |  <0.000, 0.000> |  Does not move point. Nothing to rotate |

  

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week06. Detailed instructions for doing this are posted in [Assignment 06][3].

This lab is due by October 05, 2016 08:00am.

[1]: lab6b.php
[2]: http://eecs.mines.edu/images/lab6a_rotateVector.png "vector rotation equation"
[3]: ../homework/hw6.php
  
