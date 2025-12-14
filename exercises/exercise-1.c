#include <string.h>
#include <stdio.h>

struct transaction
{
    char recipient[10];
    char sender[10];
    char recipientCreditCardNumber[16];
    char senderCreditCardNumber[16];
};

int customCopy(char *input, char *destination) {
    for (int i = 0; i < strlen(input); i++) {
        destination[i] = input[i];
    }
    return 0;
}

int main(int argc, char *argv[]) 
{
    char ourCreditCardNumber[16] = "1234567890123456";
    char ourName[10] = "company-10";

    struct transaction T;

    customCopy(ourName, T.recipient);
    customCopy(ourCreditCardNumber, T.recipientCreditCardNumber);


    printf("Enter transaction details:\n");
    printf("Sender Name: ");
    gets(T.sender);
    printf("Sender Credit Card Number: ");
    gets(T.senderCreditCardNumber);

    customCopy(ourName, T.recipient);
    customCopy(ourCreditCardNumber, T.recipientCreditCardNumber);
    printf("Transaction details:\n");
    printf("Sender: %s\n", T.sender);
    printf("Sender Credit Card Number: %s\n", T.senderCreditCardNumber);
    printf("Recipient: %s\n", T.recipient);
    printf("Recipient Credit Card Number: %s\n", T.recipientCreditCardNumber);

    return 0;
}

