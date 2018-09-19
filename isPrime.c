/*
Write a program that prints all the prime numbers between 1-100 
*/

#include <stdio.h>
int main ()
{
int i, j;
    for(i=2; i<100; i++) {
        for(j=2; j <= (i/j); j++)
        if(!(i%j)) break; 
        if(j > (i/j)) printf("%d is prime\n", i);
    }
 return 0;
}
