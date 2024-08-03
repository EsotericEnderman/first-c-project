#include <stdio.h>
#include <stdlib.h>

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}

int main()
{
    char operation;

    printf("Enter operation: ");
    scanf(" %c", &operation);

    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
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
    switch (operation) {
    case '+':
        result = add(a, b);
        break;
    case '-':
        result = subtract(a, b);
        break;
    case '*':
        result = multiply(a, b);
        break;
    case '/':
        result = divide(a, b);
        break;
    }

    printf("%f %c %f = %f", a, operation, b, result);
}
