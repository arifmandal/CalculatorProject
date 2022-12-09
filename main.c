#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculator Project!\n");
    int number1, number2;
    printf("Enter the first number:\n");
    scanf("%d", &number1);
    printf("Enter the second number:\n");
    scanf("%d", &number2);
    printf("addition: %d\n", add(number1,number2) );
    printf("subtraction: %d\n", sub(number1,number2) );
    printf("multiplication: %d\n", mult(number1,number2) );
    printf("division: %d\n", division(number1,number2) );
    printf("module: %d\n", modul(number1,number2) );
    printf("Program is ended...Good Bye...\n");
    return 0;
}

int add(int number1, int number2){
    return number1+number2;
}

int sub(int number1, int number2){
    return number1-number2;
}

int mult(int number1, int number2){
    return number1*number2;
}

int division(int number1, int number2){
    return number1/number2;
}

int modul(int number1, int number2){
    return number1%number2;
}
