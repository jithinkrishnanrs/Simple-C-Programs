#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d is a Prime Number", num);
    }
    else
    {
        printf("%d is not a Prime Number", num);
    }

    return 0;
}