#include <stdio.h>
#include <stdlib.h>

#define ADDITION_OPERATOR +
#define SUBTRACTION_OPERATOR -
#define MULTIPLICATION_OPERATOR *
#define DIVISION_OPERATOR /

#define ADDITION_OPERATOR_CHARACTER '+'
#define SUBTRACTION_OPERATOR_CHARACTER '-'
#define MULTIPLICATION_OPERATOR_CHARACTER '*'
#define DIVISION_OPERATOR_CHARACTER '/'

float add(float x, float y)
{
    return x ADDITION_OPERATOR y;
}

float subtract(float x, float y)
{
    return x SUBTRACTION_OPERATOR y;
}

float multiply(float x, float y)
{
    return x MULTIPLICATION_OPERATOR y;
}

float divide(float x, float y)
{
    return x DIVISION_OPERATOR y;
}

int main()
{
    char operation;

    printf("Enter operation: ");
    scanf(" %c", &operation);

    if (operation != ADDITION_OPERATOR_CHARACTER && operation != SUBTRACTION_OPERATOR_CHARACTER && operation != MULTIPLICATION_OPERATOR_CHARACTER && operation != DIVISION_OPERATOR_CHARACTER)
    {
        printf("Unknown operation: %c\n", operation);
        return 1;
    }

    float a;
    float b;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    float result;
    switch (operation)
    {
    case ADDITION_OPERATOR_CHARACTER:
        result = add(a, b);
        break;
    case SUBTRACTION_OPERATOR_CHARACTER:
        result = subtract(a, b);
        break;
    case MULTIPLICATION_OPERATOR_CHARACTER:
        result = multiply(a, b);
        break;
    case DIVISION_OPERATOR_CHARACTER:
        result = divide(a, b);
        break;
    }

    printf("%f %c %f = %f", a, operation, b, result);
}
