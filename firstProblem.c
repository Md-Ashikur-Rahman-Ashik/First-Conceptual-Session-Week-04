#include <stdio.h>

int sum(int num)
{
    int lastDigit = num % 10;
    int firstDigit = num / 1000;

    int sum = lastDigit + firstDigit;
    return sum;
}

int main()
{
    int num;

    scanf("%d", &num);

    int result = sum(num);
    printf("%d", result);

    return 0;
}