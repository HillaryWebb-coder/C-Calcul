#include <stdio.h>
#include <stdlib.h>

char *addition(char *result, int operand_1, int operand_2);
char *subtraction(char *result, int operand_1, int operand_2);
char *multiplication(char *result, int operand_1, int operand_2);
char *division(char *result, int operand_1, int operand_2);

int main()
{
    const enum operators { ADD,
                           SUBTRACT,
                           MULTIPLY,
                           DIVIDE };

    int operand_1 = 0;
    int operand_2 = 0;
    int operation = 0;
    char result[20];

    char exit;

    while (1)
    {

        printf("This is a basic calculator written in c. \n The operations are: \nAddition -> 0\nSubtraction->1\nMultiplication -> 2\nDivision -> 3 \n");

        printf("Enter the first operand: ");
        scanf("%d", &operand_1);
        printf("\n");
        printf("Enter the second operand: ");
        scanf("%d", &operand_2);
        printf("\n");
        printf("Enter operation to perform: ");
        scanf("%d", &operation);
        printf("\n");

        switch (operation)
        {
        case ADD:
            addition(result, operand_1, operand_2);
            printf(result);
            break;
        case SUBTRACT:
            subtraction(result, operand_1, operand_2);
            printf(result);
            break;
        case MULTIPLY:
            multiplication(result, operand_1, operand_2);
            printf(result);
            break;
        case DIVIDE:
            division(result, operand_1, operand_2);
            printf(result);
            break;

        default:
            printf("Invalid Mathematical operation");
            break;
        }

        printf("\n");

        printf("Doi you want to exit?(Y/N): ");
        scanf("%s", &exit);
        printf("\n");

        putchar(exit);

        if(exit == 'Y' || exit == 'y'){
            break;
        }
    }

    return 0;
}

char *addition(char *result, int operand_1, int operand_2)
{

    sprintf(result, "%d + %d = %d", operand_1, operand_2, operand_1 + operand_2);

    return result;
}

char *subtraction(char *result, int operand_1, int operand_2)
{

    sprintf(result, "%d - %d = %d", operand_1, operand_2, operand_1 - operand_2);

    return result;
}
char *division(char *result, int operand_1, int operand_2)
{

    sprintf(result, "%d / %d = %d", operand_1, operand_2, operand_1 / operand_2);

    return result;
}
char *multiplication(char *result, int operand_1, int operand_2)
{

    sprintf(result, "%d * %d = %d", operand_1, operand_2, operand_1 * operand_2);

    return result;
}