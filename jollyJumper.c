#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int isJollyJumper(const int seq[], int size) {
    bool diffs_found[size-1]; // Boolean array

    for(int c=0;c<size-1;c++) {
        int diff = abs(seq[c]-seq[c+1]); // Finds the absolute difference between no. c and no. c+1

        if(diff<=size-1 && !(diff==0) && !(diffs_found[diff-1]==true)) { // The diff has to be within the allowed range, has to not be 0, and has to not already have been found once
            diffs_found[diff-1]=true; // Stores the found diff in the index corresponding to itself
        }
        else {return 0;} // Abandons the program if the newly found diff doesn't satsify all conditions
    }
    return 1;
}