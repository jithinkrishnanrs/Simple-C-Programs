#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is Largest", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is Largest", num2);
    }
    else
    {
        printf("Numbers are Equal");
    }
    return 0;
}