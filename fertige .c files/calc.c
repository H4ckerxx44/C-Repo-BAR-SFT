#include <stdio.h>
#include <math.h>

long long add(long long a, long long b);
long long sub(long long a, long long b);
long long multi(long long a, long long b);
long long div(long long a, long long b);
long long power(long long a, long long b);

/* main function */
int main()
{
    // Deklaration von Operator
    char Operator;
    
    // Deklaration und Initialisierung von num1, num2 und result = 0
    long long num1, num2, result = 0;

    // get operator
    printf("Operator (+, -, *, /, **: ");
    scanf_s("%c", &Operator);
    
    // get nums
    printf("Nums: \n");
    scanf_s("%lli%lli", &num1, &num2);

    // switch-case f�r den operator
    switch (Operator)
    {
    
    // wenn case "+", addition
    case '+':
        result = add(num1, num2);
        break;
    
    // wenn case "-", subtraktion
    case '-':
        result = sub(num1, num2);
        break;
   
    // wenn case "*", multiplikation
    case '*':
        result = multi(num1, num2);
        break;
    
    // wenn case "/", division
    case '/':
        result = div(num1, num2);
        break;
    
    // wenn case "**", potenzierung
    case '**':
        result = power(num1, num2);
        break;
    
    // bei falschem operator, output error
    default:
        printf("You have entered an Invalid Operator\n");
    }
    // ausgabe der rechnung
    printf("%lli %c %lli  = %lli", num1, Operator, num2, result);
    // gibt 0 zur�ck
    return 0;
}

/* Definition der function f�r addition */
long long add(long long a, long long b)
{
    // r�ckgabe des ergebnisses
    return a + b;
}

/* Definition der function f�r subtraktion */
long long sub(long long a, long long b)
{
    // r�ckgabe des ergebnisses
    return a - b;
}

/* Definition der function f�r multiplikation */
long long multi(long long a, long long b)
{
    // r�ckgabe des ergebnisses
    return a * b;
}

/* Definition der function f�r division */
long long div(long long a, long long b)
{   
    // r�ckgabe des ergebnisses
    return a / b;
}

/* Definition der function f�r potenzierung */
long long power(long long a, long long b)
{
    // r�ckgabe des ergebnisses
    return pow(a, b);
}
