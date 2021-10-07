#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Zero is neither positive nor negative");
    }
    else if (num < 0)
    {
        printf("The number is Negative");
    }
    else
    {
        printf("The number is Positive");
    }
    return 0;
}