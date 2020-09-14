#include <stdio.h>
#include <math.h>

long long add(long long a, long long b);
long long sub(long long a, long long b);
long long multi(long long a, long long b);
long long div(long long a, long long b);
long long power(long long a, long long b);

int main()
{
    char Operator;
    long long num1, num2, result = 0;

    printf("Operator (+, -, *, /, **: ");
    scanf_s("%c", &Operator);
    printf("Nums: \n");
    scanf_s("%lli%lli", &num1, &num2);

    switch (Operator)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = sub(num1, num2);
        break;
    case '*':
        result = multi(num1, num2);
        break;
    case '/':
        result = div(num1, num2);
        break;
    case '**':
        result = power(num1, num2);
        break;
    default:
        printf("You have entered an Invalid Operator\n");
    }

    printf("%lli %c %lli  = %lli", num1, Operator, num2, result);

    return 0;
}

long long add(long long a, long long b)
{
    return a + b;
}

long long sub(long long a, long long b)
{
    return a - b;
}

long long multi(long long a, long long b)
{
    return a * b;
}

long long div(long long a, long long b)
{   
    return a / b;
}

long long power(long long a, long long b)
{
    return pow(a, b);
}
