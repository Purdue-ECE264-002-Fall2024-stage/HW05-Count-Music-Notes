# Read a CSV file and count the music notes

MIDI Tuning Standard (MTS) is a specification of precise musical pitch agreed to by the MIDI Manufacturers Association in the MIDI protocol. MTS allows for both a bulk tuning dump message, giving a tuning for each of 128 notes, and a tuning message for individual notes as they are played. 

You can have a look on simple symbolic music representation encoded in some comma-separated values (CSV) format [Symbolic CSV format](https://www.audiolabs-erlangen.de/resources/MIR/FMP/C1/C1S2_CSV.html). 

The following is an example where the CSV file has two rows of music notes.

![image](https://github.com/Purdue-ECE264-002-Fall2024-stage/HW05-Count-Music-Notes/blob/main/musicCSV.JPG)

As we count how many times each unique music note is used, the output will be:

Pitch 67 : 1

Pitch 55 : 1

Learning Goals 
==============

This assignment asks you to write a program that reads characters from a CSV file.Then count how many times is f4/67 used in the entire csv. 

What You Need To Do
===================

Modify only hw05.c and write a function called `countNotes(char * filename, double pitch)`. You have to read the characters from CSV file, and count how many times each pitch occurs. Further instructions are in the comments in the function in file hw05.c

Check Memory Leak
=================

Your program must not crash and must not leak memory. The leaked bytes will
accumulate across all test cases in each assignment. If your program
leaks memory, it is very likely that you will receive zero.  Please
use `valgrind` to check memory errors. A program that leaks memory is
like an airplane that leaks fuel. Neither can be accepted. 

WHAT TO SUBMIT
==============

Submit 'hw05.c' to gradescope as a zip file.

Test Inputs
===========

The test inputs are famous music scores. 

Due Date
=========
Sept. 23 at 11:59pm
