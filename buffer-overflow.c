#include <stdio.h>

int main() 
{
    struct {
        char buf[5];
        char x[2];
    } S = { { 0 }, { 'u' } };

    printf("Please enter your name: ");
    gets(S.buf);

    printf("Hello %s!\n", S.buf);
    printf("S.x[0] = %02x\n", S.x[0]);

    return 0;
}