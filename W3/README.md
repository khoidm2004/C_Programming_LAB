# W3 - Functions

## Learning objectives:

- Parameters & Arguments
- Return values
- Menu-driven programs
- Working with pointers (instead of return)
- Remember compile command: gcc filename.c -o filename -std=c99 -Wall -pedantic

## T1 Ask name

Create a C program with three functions:

main-function
Does the routines ("Program starting." and "Program ending.")
Utilizes askName-function.
Utilizes greetUser-function.
Returns 0
askName-function
Has param pName which is pointer to a character array
Prompts the user to insert name
Modifies the pName character array based on user input
Returns void
greetUser-function
Which takes pName as an argument
Greets the user "Hello {PName}!"
Returns void
Example program runs

```
Program starting.
Insert name: John
Hello John!
Program ending.
```

## T2 Multiple parameters

The following code should calculate the area of a rectangle based on the user inputs.

Fix the example code below without altering defined function names or function parameters. Note! the difference between parameter and argument(value itself). Fixed code must produce similar results as is in the expected program runs.

Example program run:

```
Program starting.
Insert width: 2
Insert height: 3

Area is 6.0²
Program ending.
```

## T3 Menu-driven program

Create a menu-driven C program with following options:

1 - Insert a word - stores user inserted word into memory.
2 - Show current word - Prints the word from the memory.
3 - Show current word in reverse - Prints the word from the memory in reverse.
0 - Exit - Stops the program gracefully
-1 - Unknown option (any non-defined option)
Word max length is 100 characters.

Example program runs

```
Program starting.
Options:
1 - Insert word
2 - Show current word
3 - Show current word in reverse
0 - Exit
Your choice: 1
Insert word: Banana

Options:
1 - Insert word
2 - Show current word
3 - Show current word in reverse
0 - Exit
Your choice: 2
Current word - "Banana"

Options:
1 - Insert word
2 - Show current word
3 - Show current word in reverse
0 - Exit
Your choice: 3
Word reversed - "ananaB"

Options:
1 - Insert word
2 - Show current word
3 - Show current word in reverse
0 - Exit
Your choice: 0
Exiting program.

Program ending.
```

## T4 Tally counter

Description to be implemented…

```
Program starting.
Options:
1 - Show count
2 - Increase count
3 - Reset count
0 - Exit
Your choice: 1
Current count - 0

Options:
1 - Show count
2 - Increase count
3 - Reset count
0 - Exit
Your choice: 0
Exiting program.

Program ending.
```

## T5 Words in a string

Description to be implemented…

```
Program starting.
Insert word(empty stops): change
Insert word(empty stops): is
Insert word(empty stops): constant
Insert word(empty stops):
- 3 Words
- 16 Characters
- 5.33 Average word length
Program ending.
```

## T6 Read a text file

Datasets
W3_T6_D1.txt
W3_T6_D2.txt
W3_T6_D3.txt
Description to be implemented…

````
Program starting.
This program can read a file.
Insert filename: W3_T6_D1.txt
#### START "W3_T6_D1.txt" ####
Hello
World

#### END "W3_T6_D1.txt" ####
Program ending.```

T7 Write a text file
Description to be implemented…


````

Program starting.
Insert first name: Guido
Insert last name: Rossum
Insert filename: A6_T2_F1.txt
Program ending.```

Example written files

```
Guido
Rossum
```
