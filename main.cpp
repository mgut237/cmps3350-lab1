// CMPS 3350 - lab 1 is all bout git :D
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
        printf("hello :D\n");
    }
    return 0;
}

