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

    printf("\nCalculator Program in C\n");
    printf("Select your Calculator type:\n");
    printf("1. Normal (N)\n2. Scientific (S)\n3. Shape Calculator (C)\n \n");

    printf("Enter your Calculator Type (N or S or C): ");
    scanf(" %c", &calcType);

    if (calcType == 'N')
    {
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
            printf("\n1. Part of another Number (P)\n2. Convert Decimal to Percentage (D)");
            scanf("%c", &numType);

            // Need some working to do with this...

            switch (numType)
            {
            case 'D':
                printf("\nEnter your Number: ");
                scanf("%lf", &firstNum);

                result = firstNum * 100;
                roundResult = round(result);

                printf("\nResult: %.2f", result);
                printf("\nRound off Result: %.0lf", roundResult);

                break;

            case 'P':
                printf("\nEnter the first number (part): ");
                scanf("%lf", &firstNum);

                printf("\nEnter the second number (total): ");
                scanf("%lf", &secondNum);

                result = (firstNum / secondNum) * 100;
                roundResult = round(result);

                printf("\nResult: %.2lf", result);
                printf("\nRound off number: %.0lf", roundResult);

                break;
            }

            break;
        default:
            printf("This is an invalid option! Choose A, S, M, D, P, R, or Q");
        }
    }
    else if (calcType == 'S')
    {
        printf("\nScientific Calculator\n");
    }
    else if (calcType == 'C')
    {
        printf("\nShape Calculator\n");
    }
    else
    {
        printf("Please enter a valid option (N, S or C)");
        scanf("%c", &exit);
    }

    getchar();

    return 0;
}