/*
Prints out all ascii characters
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Prints out binary data for a char
void printBinary(char c) {
    //Get bits
    char cache;
    for (int i = 0; i < 8; i++) {
        cache = c >> i;
        //And operator to extract the bit and print it
        printf("%i", cache & 0b1);
    }
}

int main() {
    for (char c = 0; c < 127; c++) {
        printf("%c: ", c);
        printBinary(c);
        printf("\n");
    }
}