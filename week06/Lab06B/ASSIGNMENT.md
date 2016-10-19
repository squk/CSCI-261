
[Source](http://eecs.mines.edu/Courses/csci261/labs/lab6b.php "Permalink to CSCI 261 - Programming Concepts")

# CSCI 261 - Programming Concepts

This lab is due by October 05, 2016 08:00am.

  

* * *

### Approximating a Circle

* * *

In computer graphics, it is very difficult to draw a true circle. Our screen is made up of pixels which is essentially a large grid. We can therefore only draw straight lines and we cannot truly represent a curve on our screen. Instead of drawing a true circle, we can draw an approximation of a circle by connecting straight lines.

  

* * *

### Turtle Graphics

* * *

  

We are going to lay the ground work for a very simple Turtle Graphics program. Turtle Graphics is a simple drawing program often used to teach basic computer programming. Imagine a turtle with a pen attached to his tail. The turtle can only move forward and when he does, a line is drawn behind him. We can send other commands to the turtle to make the turtle turn. If you want to play around with a visual Turtle Graphics program, then [here is a link to try online][1].

We will revisit the graphical portion later on in the course, but for now we are going to print out the `Point`s that the Turtle moves over. We are going to need our `Point` and `Vector struct`s, plus the functions we wrote in [Lab06A][2]. Let's get started.

Start off by creating a new `struct` called `Turtle`. It should have two data members, (1) a `Point` for the location and (2) a `Vector` for the heading. These two data members correspond go the turtle's current location and the direction it is facing. In our `main()`, create a `Turtle` variable and set it's location to (1,0) and it's heading to &lt;1, 0&gt;.

We now need two functions to allow our `Turtle` to move. The first will be called `MoveTurtleForward` and will do just what it says - move our Turtle forward along its heading some distance. This function will accept two parameters - a `Turtle` variable passed by reference and a double variable passed by value representing the distance to move. The function does not return a value. Inside the function, it will add the turtle's heading (a `Vector`) scaled by the distance to the turtle's current location (a `Point`). In vector math, this is represented by

  
![move forward equation][3]

The second function will be called `TurnTurtleLeft` and will do as it says - rotate the turtle's heading to the left by some angle. This function again takes two parameters - a `Turtle` variable passed by reference and a double variable passed by value representing the angle to rotate. The function does not return a value. Inside the function, it will rotate the turtle's heading by the angle provided (hmm, don't we have a function that does this already? Let's call it!).

Our Turtle will follow the following pseudocode to draw an approximation for a circle:

1. Determine resolution of circle approximation (i.e. the number of sides to draw)
2. while we still have sides left to draw
    3. Move forward some distance
    4. Turn left some angle
    5. Go back to #2 and repeat
This pseudocode should look like a loop - and recursive functions can replicate loops. We're now ready to get to the magic part and write our first recursive function! Create a function called `ApproximateCircle`. This function has no output and takes four parameters as input. These parameters are

1. A `Turtle` variable passed by reference
2. A double variable passed by value representing the angle to rotate every time
3. A double variable passed by value representing the distance to move forward
4. An int variable passed by value representing the number of steps left to take
Inside our function we will need the base case and the recursive case. The base case is simple - if we have no more steps left to take, then we'll just return from our function and do nothing.

If we do have steps left to take, then we'll take the recursive case. The recursive case will do four things in this order:

1. Turn our turtle to the left by `angle`
2. Move our turtle forward by `distance`
3. Print the turtle's current location
4. Call our `ApproximateCircle` function with one less step
And now with our recursive function complete, we need to get ready to call it. Back in `main()`, ask the user what resolution they would like to approximate the circle to. Ensure the value the user enters is three or greater. (Why is three the minimal acceptable value? What shape does this correspond to?). Based on this resolution, we can now compute the angle we need to rotate by and the distance to move forward. Use the following two equations to compute these values:

  
![theta and distance equations][4]

These values will keep our circle approximation to have a radius close to one.

Congrats on writing your first recursive program! We will see more recursive programs coming up in the near future. And we will pick this lab back up to actually draw the points so we can see where our turtle has moved.

  

* * *

### Test Values

* * *

Here are some known input/output values that you can test against. **Be sure to try your own to verify the code works!** After our discussion following the coding quiz, think about the boundary conditions and edge cases that may arise.

| Inputs |	Theta	| Distance |	Points |	Purpose of Test |
| --- | --- | --- | --- | --- |
| 6 | 1.047 | 1.000 | (1.500, 0.866)<br>(1.000, 1.732)  <br>(0.000, 1.732)  <br>(-0.500, 0.866)  <br>(0.000, 0.000)  <br>(1.000, 0.000) |  Creates a hexagon with side length = 1 |
| 2  <br>3 |  2.094 |  1.732 |  (0.134, 1.500)  <br>(-0.732, 0.000)  <br>(1.000, 0.000) |  Ensures resolution is greater than 2. Creates a triangle |

* * *

### Lab Submission

* * *

  

You will submit your solution to this lab with the rest of Week06. Detailed instructions for doing this are posted in [Assignment 06][5].

This lab is due by October 05, 2016 08:00am.

[1]: http://www.sonic.net/~nbs/webturtle/
[2]: lab6a.php
[3]: http://eecs.mines.edu/images/lab6b_moveforward.png "move forward equation"
[4]: http://eecs.mines.edu/images/lab6b_equations.png "theta and distance equations"
[5]: ../homework/hw6.php
  
