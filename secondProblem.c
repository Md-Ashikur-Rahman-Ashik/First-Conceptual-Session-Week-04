#include <stdio.h>

void printNumbers(int num)
{
    if (num > 0)
    {
        int finalNumber = (num * (-1));
        for (int i = num; i >= finalNumber; i--)
        {
            printf("%d ", i);
        }
    }
    else{
        int finalNumber = (num * (-1));
        for (int i = num; i <= finalNumber; i++)
        {
            printf("%d ", i);
        }
        
    }
}

int main()
{
    int num;

    scanf("%d", &num);

    printNumbers(num);

    return 0;
}