#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // example for heap overflow
    char name[100]; 
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        name[strcspn(name, "\n")] = '\0';

        char *in = malloc(10);

        strcpy(in, name);
        printf("Hi: %s\n", in);

        free(in);
    } else {
        fprintf(stderr, "Error reading input\n");
    }

    return 0;
}