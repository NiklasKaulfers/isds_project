#include <stdio.h>

int sum(int a[], int length, int index) 
{
    if (index == length) {
        return 0;
    }
    return a[index] + sum(a, length, index + 1);
    
}

int main() 
{
    // example for a stack overflow with the stack fully overflowing causing an error
    
    int length = 1000000000;
    int a[length];
    

    for (int i = 0; i <= length; i++) {
        a[i] = i;
    }

    printf("Sum: %d\n", sum(a, length, 0));
    return 0;
}