// ***
// *** You MUST modify this file.
// 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 150

int countNotes(char * filename, double pitch){

// Open the CSV file for reading
//Check if the file was opened successfully
////MAXLENGTH is maximum number if lines from CSV
//store each line of the file
// Read the header line to skip it
//count occurance of each pitch   
//consider using sscanf
FILE *file = fopen(filename, "r");
char line[MAXLENGTH];
int count = 0;
fgets(line, sizeof(line), file);
while (fgets(line, sizeof(line), file)) {
        double currentPitch;
        sscanf(line, "%*[^;];%*[^;];%lf", &currentPitch);

        // Compare with the target pitch
        if (currentPitch == pitch) {
            count++;
        }
    }

    return count;


}
