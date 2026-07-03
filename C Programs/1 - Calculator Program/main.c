#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

    // CALCULATOR PROGRAM

    double firstNum = 0.0;
    double secondNum = 0.0;
    char calcType = '\0';
    char normOpt = '\0';
    double result = 0.0;
    int roundResult = 0;

    printf("\nCalculator Program in C\n");
    printf("Select your Calculator type:\n");
    printf("1. Normal (N)\n2. Scientific (S)\n3. Shape Calculator (C)\n \n");

    printf("Enter your Calculator Type (N or S or C): ");
    scanf(" %c", &calcType);

    switch (calcType)
    {
    case 'N':
        printf("\nNormal Calculator\n");

        // Normal Calculator

        printf("\nChoose the arithemetic operator to do:\n");
        printf("\n1. Addition (A)\n2. Subtraction (S)\n3. Multiplication (M)\n4. Division (D)\n5. Power (P)\n6. Square Root (R)\n");

        // Operator Type Selecting

        printf("Enter your Operator Type (A, S, M, D, P or R): ");
        scanf(" %c", &normOpt);

        switch (normOpt)
        {
        case 'A':
            printf("Enter your first number: ");
            scanf("%lf", &firstNum);

            printf("Enter your second number: ");
            scanf("%lf", &secondNum);

            result = firstNum + secondNum;
            roundResult = round(result);

            printf("\nResult: %.3lf", result);
            printf("\nRound off number: %d", roundResult);

            break;

        case 'B':

            break;
        }

    case 'S':
        printf("\nScientific Calculator\n");
        break;
    case 'C':
        printf("\nShape Calculator\n");
        break;
    default:
        printf("\n%c is not a valid calculator type, please choose (N or S or C)", calcType);
        break;
    }

    return 0;
}