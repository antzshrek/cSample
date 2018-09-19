/*
write a program that accepts two integers and check if they're equal

E.g

Ex.1
Input: 2 & 4
Output: not equal

Ex.2
Input; 1 & 1
Output: equal
*/


#include <stdio.h>

int main()
{
    int firstValue, secValue;
    printf("Enter the first and second intergers\" (aside any value below 0)" "\" to check\n\n");
    scanf("%d %d", &firstValue, &secValue);
    
    if (firstValue == secValue) {
        /* code */
        printf("\n\nBoth the first and second values are equal\n\n");
    }
    
    else
    {
        printf("\n\nThe first and second values are not equal\n\n");
    }
    return 0;
}
