#include <stdio.h>

int Math(int, int, char);
int main()
{
    printf("Hello, World!\n");
    printf("%i", Math(2, 2, '+'));
    printf("\n");
    printf("%i", Math(2, 3, '-'));
    printf("\n");
    printf("%i", Math(2, 6, '*'));
    printf("\n");
    printf("%i", Math(6, 2, '/'));
    printf("\n");
    printf("%i", Math(3, 2, '%'));
    return 0;
}

/**
 * Performs basic math functions (addition, subtraction, multiplication, division, modulus)
 * @param num1 - first number.
 * @param num2 - second number.
 * @param operator - symbol of the operation that will be done.
 * @return the result of the operation.
 * */
int Math(int num1, int num2, char operator)
{
    int result = 0;
    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1/num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
            printf("ERROR");
            break;
    }
    return result;
}