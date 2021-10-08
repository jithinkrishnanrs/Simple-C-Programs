#include <stdio.h>

int main()
{
    char ch;
    int num1, num2, result;
    float quotient = 0;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Choose the Operation (+,-,*,/): ");
    scanf(" %c", &ch);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    switch (ch)
    {
    case '+':
        result = num1 + num2;
        printf("Sum is %d", result);
        break;

    case '-':

        result = num1 - num2;
        printf("Difference is %d", result);
        break;

    case '*':

        result = num1 * num2;
        printf("Product is %d", result);
        break;

    case '/':

        quotient = (float)num1 / (float)num2;
        printf("Quotient is %f", quotient);
        break;

    default:
        printf("Invalid Operator Input\n");
    }
    return 0;
}