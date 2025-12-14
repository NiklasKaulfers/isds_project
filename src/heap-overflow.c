#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // example for heap overflow
    char name[100]; 
    printf("Enter your name: ");
    gets(name);
    char *in = malloc(10);
    strcpy(in, name);
    printf("Hi: %s\n", in);
    free(in);

    return 0;
}