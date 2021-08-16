/*
Prints out the binary value of ascii characters
TODO: Consider making a gui version of this

Written by Quinn Neufeld
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HELP_MSG "Usage: ascii <chars>\nPrints out the binary values of ascii characters\n"

/*
Consolidates a bunch of strings into a single string
strs -- strings to be consolidated
n -- number of strings to consolidate
s -- position to start from
*/
char* consolidateStrings(char** strs, int n, int s) {
    //Get the length of all the strings in strs
    size_t len = 0;
    for (int i = s; i < n; i++) {
        len += strlen(strs[i]);
    }
    char* outstr = (char*) malloc(sizeof(char) * len);
    for (int i = s; i < n; i++)  {
        strcat(outstr, strs[i]);
    }
    return outstr;
}

//Prints binary data for a char
void printBinary(char c) {
    char cache;
    for (int i = 0; i < 8; i++) {
        cache = c >> i;
        printf("%i", cache & 0b1);
    }
}

int main(int argc, char** argv) {
    if (argc < 3) {
        printf(HELP_MSG);
	return 1;
    }
    for (int i = 0; i < argc; i++) {
        if (!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help")) {
            printf(HELP_MSG);
	    return 1;
	}
    }
    //Consolidate argv strings
    char* fullstr = consolidateStrings(argv, argc, 1);
    size_t fulllen = strlen(fullstr);
    char c;
    for (size_t i = 0; i < fulllen; i++) {
        c = fullstr[i];
        printf("%c: ", c);
        printBinary(c);
        printf("\n");
    }
}
