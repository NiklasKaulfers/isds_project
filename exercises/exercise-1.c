#include <string.h>
#include <stdio.h>

struct transaction
{
    char sender[11];
    char recipient[11];
    char senderCreditCardNumber[17];
    char recipientCreditCardNumber[17];
};

int customCopy(char *input, char *destination) {
    size_t i;
    for (i = 0; i < strlen(input); i++) {
        destination[i] = input[i];
    }
    return 0;
}

int main(int argc, char *argv[]) 
{
    char ourCreditCardNumber[17] = "1234567890123456\0";
    char ourName[11] = "company-10\0";

    struct transaction T;

    customCopy(ourName, T.recipient);
    customCopy(ourCreditCardNumber, T.recipientCreditCardNumber);

    printf("Welcome to the totally secure transaction system!\n");

    printf("Enter transaction details:\n");
    printf("Sender Name: ");
    gets(T.sender);
    printf("Sender Credit Card Number: ");
    gets(T.senderCreditCardNumber);

    printf("Transaction details:\n");
    printf("Sender: %s\n", T.sender);
    printf("Sender Credit Card Number: %s\n", T.senderCreditCardNumber);
    printf("Recipient: %s\n", T.recipient);
    printf("Recipient Credit Card Number: %s\n", T.recipientCreditCardNumber);

    return 0;
}

