## Source: KNK C chapter08 project 09

Write a program that generates a "random walk" across a 10x10 array. <br>
The array will contain characters (all '.' initially). The program <br>
must randomly "walk" from element to element, always going up, down, <br>
left, or right by one element. The elements visited by the program <br>
will be labeled with the letters A through Z, in the order visited. <br>
Here's an example of the desired output: <br>
```
  A . . . . . . . . .
  B C D . . . . . . .
  . F E . . . . . . .
  H G . . . . . . . .
  I . . . . . . . . .
  J . . . . . . . Z .
  K . . R S T U V Y .
  L M P Q . . . W X .
  . N O . . . . . . .
  . . . . . . . . . .
```
numbers. After generating a number, look at its remainder when divided <br>
Hint: Use the srand and rand functions (see deal.c) to generate random <br>
by 4. There are four possible values for the remainder (0, 1, 2, and 3) <br>
indicating the direction of the next move. Before performing a move, <br>
check that (a) it won't go outside the array, and (b) it doesn't take <br> 
us to an element that already has a letter assigned. If either condition <br>
is violated, try moving in another direction. If all four directions are <br>
blocked, the program must terminate. Here's an example of a premature <br>
termination: <br>
```
  A B G H I . . . . .
  . C F . J K . . . .
  . D E . M L . . . .
  . . . . N O . . . .
  . . W X Y P Q . . .
  . . V U T S R . . .
  . . . . . . . . . .
  . . . . . . . . . .
  . . . . . . . . . .
  . . . . . . . . . .
```
Y is blocked on all four sides, so there's no place to put Z. <br>
