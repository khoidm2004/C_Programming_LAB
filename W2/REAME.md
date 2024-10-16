# W2 - Control statements and preprocessor
## Learning objectives:

- Flow controls
- Conditional statements
- Loop structures
- Preprocessors
- Remember compile command: gcc filename.c -o filename -std=c99 -Wall -pedantic

## T1 - If-statement
Create a program in C and implement if-statements in proper places.

Ask user to insert two integers
Compare the integers and then announce the greater number
Calculate sum of the two integers (first + second = sum) Check the parity of the sum (see modulo-operator ‘%’)
Possible output variants:

First integer is greater.
Second integer is greater.
Integers are the same.
Sum is even.
Sum is odd.
Example program run

Tab 1 Tab 2 Tab 3
Program starting.
Insert two integers.
Insert first integer: 2
Insert second integer: 3
Comparing inserted integers.
Second integer is greater.

Adding integers together
2 + 3 = 5

Checking the parity of the sum...
Sum is odd.
Program ending.

## T2 - Loop numbers
Write program in C, which prompts user to insert starting and stopping point (integers).

If the starting point is less than the stopping point, then create a loop from that range where iterator increases by one on each iteration. Otherwise print error message.

Example program run:

Tab 1 Tab 2 Tab 3 Tab 4
Program starting.

Insert starting point: 3
Insert stopping point: -1

Starting for-loop:
Couldn't run loop. Starting point must be less than stopping point.
Program ending.

## T3 - Repetitive prompt
Create a program with C and make it prompt words from user. Calculate the amount of words and characters inserted by the user.

The program must stop the prompt if user inserts an empty word. Before exiting, the program reports inserted words and characters to the user.

User is friendly and doesn’t write any word that is over 100 characters or that contains whitespace characters.

Useful functions:

strlen from <string.h>
fgets from <stdio.h>
Example program run:

Tab 1 Tab 2 Tab 3
Program starting.

Insert word (empty stops): Close
Insert word (empty stops): the
Insert word (empty stops): loop
Insert word (empty stops): 

You inserted:
- 3 words
- 12 characters

Program ending.

## T4 - String comparisons
Create program with C and make it do the following steps:

Prompt user to insert
A word
A character
Check if the character exist in the word. Possible prints below.
Word "{WordFirst}" contains character "{Character}"
Word "{WordFirst}" doesn't contain character "{Character}"
Example program run:

Tab 1 Tab 2 Tab 3
Program starting.
String comparisons
Insert first word: beans
Insert a character: n
Word "beans" contains character "n"
Insert second word: banana
The second word "banana" is before the first word "beans" alphabetically.
Program ending.

## T5 - Break and continue
Make a program, which prompts user to insert three integers:

Starting point
Stopping point
Inspection point
Test the points with following rules(Note! testing order matters):

Starting point must be less than stopping point
"Starting point value must be less than the stopping point value."
The inspection point must be within the range of the start and stop points.
"Inspection value must be within the range of start and stop."
If any rule above is broken, print the violation message(s) to the user and then skip the next part till the “Program ending.” print. Within range means inclusively. So both “1” and “100” are on the 1-100 range.

Run two for-loops like shown in the example program runs if none of the rules above are broken. Inside the loops, compare the inspection point to the current iteration. Use break and continue commands if the current iteration is same as the inspection point. Otherwise print the current iteration on the same line.

Note! There must be no trailing space character at the end of any row.

Example program run:

Tab 1 Tab 2 Tab 3 Tab 4 Tab 5 Tab 6
Program starting.

Insert starting point: 3
Insert stopping point: 8
Insert inspection point: 5

First loop - inspection with break:
3 4
Second loop - inspection with continue:
3 4 6 7

Program ending.

## T6 - Decision trees
In this task the idea is to create a program where user can define an integer and choose the decision structure being applied to the inserted integer. Certain rules must be applied to specified value tresholds and the decision structure has partial role in the end results. Structure, order and operators matter, so do exactly as the task describes.

Prompt user to insert value as an integer.
Display menu
option 1 - In one multi-branched decision
option 2 - Independent if-statement decisions
option 0 - Exit
Prompt user to choose option
Apply following math operations in the options 1 & 2
One multi-branched decision structure:
Value is 400 or more => add 44 to the existing value
Value is 200 or more => add 22 to the existing value
Value is 100 or more => add 11 to the existing value
Independent if-statement decisions one after another:
Value is 400 or more => add 44 to the existing value
Value is 200 or more => add 22 to the existing value
Value is 100 or more => add 11 to the existing value
Exit: “Exiting…”
At the end of the options 1 & 2, show the results like in the example program runs.
Other possible output variats:

Unknown option.
Example program run:

Tab 1 Tab 2 Tab 3 Tab 4 Tab 5 Tab 6
Program starting.
Testing decision structures.
Insert an integer: 250
Options:
1 - In one multi-branched decision
2 - In multiple independent if-statements
0 - Exit
Your choice: 2
Using multiple independent if-statements structure.
Result is 283

Program ending.

## T7 - Menu program
Create a program with a plain menu.

Prompt username first
Make program menu with following options:
Print welcome message: Welcome {Name}!
Exit: Exiting...
Prompt user to choose option Your choice:
Perform actions based on the user input
Creating menus like this is a really handy way to make tiny text-based programs and there will be more exercises like this in the future.

The expectation at this point is that the user is able to choose option by inserting corresponding number. No error handling is required, it will be introduced later.

Other possible output variats:

Unknown option.
Example program run:

Tab 1 Tab 2 Tab 3
Program starting.
This is a program with simple menu, where you can choose which operation the program performs.
Before the menu, please insert your name: John

Options:
1 - Print welcome message
0 - Exit
Your choice: 1
Welcome John!

Program ending.