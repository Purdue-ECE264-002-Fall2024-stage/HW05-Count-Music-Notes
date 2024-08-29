// ***
// *** DO NOT modify this file
// ***

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include "hw05.h"

int main(int argc, char * * argv){

// read input file
if (argc != 2)
  {
    return EXIT_FAILURE;
  }
//const char *filename = argv[1];
//FILE *file = fopen(filename, "r");
int pitches[] = {67.0, 55.0, 43.0, 63.0, 51.0, 39.0, 65.0, 53.0, 41.0, 62.0, 50.0, 38.0};
int numPitches = sizeof(pitches) / sizeof(pitches[0]);

for (int i = 0; i < numPitches; i++) {
        
        //fseek(file, 0, SEEK_SET);

        int count = countNotes(argv[1], pitches[i]);
        printf("Pitch %d : %d\n", pitches[i], count);
    }

    //fclose(file);
    return EXIT_SUCCESS;
}
