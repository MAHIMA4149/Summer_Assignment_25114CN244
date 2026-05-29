#include <stdio.h>

int main() {
    int num, temp , rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        digit = num % 10;                 
        rev= rev* 10 + digit;   
        num = num / 10;                   
    }

    if (temp == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}