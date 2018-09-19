/*
Write a program that calculates the sum of values in a given integers

E.g

Ex.1
Input: 12
Output: 3

Ex.2
Input; 5000
Output: 5
*/

#include <stdio.h>

int  main(){
    long num, temp, digit, sum = 0;
    printf("Enter the number you will want to calculate the individual values: \n\n");
    scanf("%ld", &num);
    temp = num;
    while (num > 0){
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }
    printf("Given number  = %ld\n\n", temp);
    printf("-----------------------\n\n| \tSum of the digits %ld is = %ld\n\n-----------------------\n", temp, sum);
    return 0;
}


//OR 

//to try the solution below, uncomment it then comment the one directly above

// #include <stdio.h>

// int sum (int a);

// int  main(){
//     int num, result;
//     printf("Enter the number you will want to calculate the individual values: \n\n");
//     scanf("%d", &num);
//     result = sum(num);
//     printf("-----------------------\n\n| \tSum of the digits %d is = %d\n\n-----------------------\n", num, result);
//     return 0;
// }
// int sum (int num){
//         if (num != 0){
//             return (num % 10 + sum (num / 10));
//         }
//         else{
//             return 0;
//         }
//     }