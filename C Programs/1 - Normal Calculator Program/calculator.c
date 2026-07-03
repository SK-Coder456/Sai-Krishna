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
    double roundResult = 0;
    char numType = '\0';
    char exit = '\0';

    printf("\nNormal Calculator Program in C\n");

    printf("\nNormal Calculator\n");

    // Normal Calculator

    printf("\nChoose the arithemetic operator to do:\n");
    printf("\n1. Addition (A)\n2. Subtraction (S)\n3. Multiplication (M)\n4. Division (D)\n5. Power (P)\n6. Square Root (R)\n7. Percentage\n");

    // Operator Type Selecting

    printf("Enter your Operator Type (A, S, M, D, P, R, or Q): ");
    scanf(" %c", &normOpt);

    switch (normOpt)
    {
    case 'A':
        printf("\nEnter your first number: ");
        scanf("%lf", &firstNum);

        printf("Enter your second number: ");
        scanf("%lf", &secondNum);

        result = firstNum + secondNum;
        roundResult = round(result);

        printf("\nResult: %.3lf", result);
        printf("\nRound off number: %.0lf", roundResult);

        break;

    case 'S':
        printf("\nEnter your first number: ");
        scanf("%lf", &firstNum);

        printf("Enter your second number: ");
        scanf("%lf", &secondNum);

        result = firstNum - secondNum;
        roundResult = round(result);

        printf("\nResult: %.3lf", result);
        printf("\nRound off number: %.0lf", roundResult);

        break;

    case 'M':
        printf("\nEnter your first number: ");
        scanf("%lf", &firstNum);

        printf("Enter your second number: ");
        scanf("%lf", &secondNum);

        result = firstNum * secondNum;
        roundResult = round(result);

        printf("\nResult: %.3lf", result);
        printf("\nRound off number: %.0lf", roundResult);

        break;

    case 'D':
        printf("\nEnter your first number: ");
        scanf("%lf", &firstNum);

        printf("Enter your second number: ");
        scanf("%lf", &secondNum);

        result = firstNum / secondNum;
        roundResult = round(result);

        printf("\nResult: %.3lf", result);
        printf("\nRound off number: %.0lf", roundResult);

        break;

    case 'P':
        printf("\nEnter your first number (Base): ");
        scanf("%lf", &firstNum);

        printf("Enter your second number (Power): ");
        scanf("%lf", &secondNum);

        result = pow(firstNum, secondNum);
        roundResult = round(result);

        printf("\nResult: %.3lf", result);
        printf("\nRound off number: %.0lf", roundResult);

        break;

    case 'R':
        printf("\nEnter your number: ");
        scanf("%lf", &firstNum);

        result = sqrt(firstNum);
        roundResult = round(result);

        printf("\nResult: %.3lf", result);
        printf("\nRound off number: %.0lf", roundResult);

        break;

    case 'Q':
        printf("\nChoose one of the following: \n");
        printf("\n1. Part of another Number (P)\n2. Convert Decimal to Percentage (D)\n");

        printf("Enter your percentage conversion type: ");
        scanf(" %c", &numType);

        // Need some working to do with this...

        if (numType == 'D')
        {
            printf("\nEnter your Number: ");
            scanf("%lf", &firstNum);

            result = firstNum * 100;
            roundResult = round(result);

            printf("\nResult: %.2f", result);
            printf("\nRound off Result: %.0lf", roundResult);
        }

        else if (numType == 'P')
        {
            printf("\nEnter the first number (part): ");
            scanf("%lf", &firstNum);

            printf("\nEnter the second number (total): ");
            scanf("%lf", &secondNum);

            result = (firstNum / secondNum) * 100;
            roundResult = round(result);

            printf("\nResult: %.2lf", result);
            printf("\nRound off number: %.0lf", roundResult);
        }

        else
        {
            printf("This is an invaild option (D or P)");
        }

        break;

    default:
        printf("This is an invalid option! Choose A, S, M, D, P, R, or Q");
    }

    getchar();

    return 0;
}