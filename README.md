# Read a CSV file and count the music notes

MIDI Tuning Standard (MTS) is a specification of precise musical pitch agreed to by the MIDI Manufacturers Association in the MIDI protocol. MTS allows for both a bulk tuning dump message, giving a tuning for each of 128 notes, and a tuning message for individual notes as they are played. 

You can have a look on simple symbolic music representation encoded in some comma-separated values (CSV) format. 
[Symbolic CSV format](https://www.audiolabs-erlangen.de/resources/MIR/FMP/C1/C1S2_CSV.html)

Start;"Duration";"Pitch";"Velocity";"Label"
0.25;0.23;67.0;1.0;"Right Hand"
0.25;0.23;55.0;1.0;"Right Hand"
![image](https://github.com/user-attachments/assets/79bb0f4f-38eb-4ab7-9635-c453dd103739)


Learning Goals 
==============

This assignment asks you to write a program that reads characters from a CSV file.Then count the number of each music notes( #e.g how many times is F4 used in the entire note/csv). 

You will learn to
* Read characters from CSV
* Count the number of occurances of each music note

What You Need To Do
===================

Write a function called countNotes(char * filename, int * pitch). You have to read the characters from CSV file, and count the notes. Further instructions are in the comments in the function in file hw05.c
