#include <string.h>
#include <stdio.h>

struct transaction
{
    char sender[11];
    char recipient[11];
    char senderCreditCardNumber[17];
    char recipientCreditCardNumber[17];
};


int main(int argc, char *argv[]) 
{
    char ourCreditCardNumber[16] = "1234567890123456";
    char ourName[10] = "company-10";

    struct transaction T;
    strncpy(T.recipient, ourName, sizeof(T.recipient) - 1);
    T.recipient[sizeof(T.recipient) - 1] = '\0';

    strncpy(T.recipientCreditCardNumber, ourCreditCardNumber, sizeof(T.recipientCreditCardNumber) - 1);
    T.recipientCreditCardNumber[sizeof(T.recipientCreditCardNumber) - 1] = '\0';

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

