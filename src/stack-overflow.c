#include <stdio.h>

int main() 
{
    // example for stack overflow
    struct {
        char buf[5];
        char x[2];
    } S = { { 0 }, { 'u' } };

    S.x[0] = 'x';
    S.x[1] = 'x'; 

    printf("S.x = %c%c\n", S.x[0], S.x[1]);

    printf("Please enter your name: ");
    gets(S.buf);

    printf("Hello %s!\n", S.buf);
    printf("S.x = %s\n", S.x);

    return 0;
}