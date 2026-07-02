#include <stdio.h>
#include <string.h>

int main() {

    // Shopping Cart Program

    // Declarations of Variables

    char item[50] = "";
    char currency = '\0';
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;

    // Input from User

    printf("What are you going to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is your currency?: ");
    scanf(" %c", &currency);

    printf("What is the price of %s?: ", item);
    scanf("%f", &price);

    printf("How many %s do you want?: ", item);
    scanf("%d", &quantity);

    // Processes

    total = price * quantity;

    // Output

    printf("\nYou have ordered the %s for %d times\n", item, quantity);
    printf("Your total is %.2f", total);

    return 0;
}