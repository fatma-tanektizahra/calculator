#include <stdio.h>

int main() {
    char op;
    double n1, n2, result;

    printf("\nGive the operator (*,+,-,/): ");
    scanf(" %c", &op);

    printf("\nGive the first number: ");
    scanf("%lf", &n1);

    printf("\nGive the second number: ");
    scanf("%lf", &n2);

    switch (op) {
        case '+':
            result = n1 + n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    printf("%lf", result);
    return 0;
}

