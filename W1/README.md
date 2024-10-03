# Tasks

## T1 - Standard output
Create program to print the line shown below with C-Programming language. To see more examples, see C Quickstart

Steps to create:

Include headerfile stdio.h
Define main function. Main function always returns integer 0.
Use printf function to print line into the standard output. Remember that a line must end in a newline character
Example program run:

Programming in C!

## T2 - Variables
Define two variables in C program:

Integer with value 10
Float with Pii value (atleast 6 decimals)
First print the integer in a line, then float on its own line. Finally print both on the same line. Use format specifiers like %d and %f.

Example program run:

Program starting.
Integer is 10
Float Pii is 3.141593
Integer 10, Pii 3.141593
Program ending.

## T3 - Standard input
Prompt user to insert an integer.

Steps:

Initialize int variable
Use scanf function to collect digit.
Collect with string format specified %d
Example program runs:

Program starting.
Insert an integer: 70
You inserted 70
Program ending.


## T4 - Multiply floating points
Create a program which prompts user to insert two floating point values. Then use the inserted values to calculate product. Finally display the multiply operation where each value is shown with 2 decimal precision (no rounding).

Example program runs:

Program starting.
Insert multiplicant: 3
Insert multiplier: 5
3.00 * 5.00 = 15.00
Program ending.


## T5 - Word (character array)
Define variable name as 10 character long array(string in C).

Prompt user to insert name and then use the scanf and %s to collect user input. Then print the name. Show also the name size by using sizeof-function.

Example program runs:

Program starting.
Insert name(max. 9 chars): John
Name is "John".
Name array size is 10 characters.
Program ending.


## T6 - Row input
Create program which can collect full name (first name and last name separated by a space character). Use fgets to collect the full name. Then use NULL-character \0 to replace the collected newline character \n so that the fullname can be printed on the same row.

To get the length of the inserted line, use strlen-function by including <string.h>. Remember, line is content + newline. So in order to replace newline with NULL, subtract one from the string length value.

Example program runs:

Program starting.
Insert full name(max. 28 chars): John Doe
Your name is "John Doe".
Program ending.


## T7 - Two values from same input
Create a C-program, which can collect two values from the same input. This program must calculate difference between the values, so use floating point values.

Example program run:

Program starting.
Insert minuend and subtrahend separated by space: 8 5
Difference is 8.00 - 5.00 = 3.00
Program ending.

