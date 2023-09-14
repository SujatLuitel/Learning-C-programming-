#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float num1, num2, result;
    char operatoor;

    printf("Select operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Power (^)\n");
    printf("7. Square Root (sqrt)\n");
    printf("8. Absolute Value (abs)\n");
    printf("9. Floor (floor)\n");
    printf("Enter choice (1-9): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            operatoor = '+';
            break;
        case 2:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            operatoor = '-';
            break;
        case 3:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            operatoor = '*';
            break;
        case 4:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            if (num2 == 0)
            {
                printf("Error: Cannot divide by zero");
                return 0;
            }
            result = num1 / num2;
            operatoor = '/';
            break;
        case 5:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            result = fmod(num1, num2);
            operatoor = '%';
            break;
        case 6:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            result = pow(num1, num2);
            operatoor = '^';
            break;
        case 7:
            printf("Enter operand: ");
            scanf("%f", &num1);
            if (num1 < 0)
            {
                printf("Error: Cannot calculate square root of negative number");
                return 0;
            }
            result = sqrt(num1);
            operatoor = ' ';
            break;
        case 8:
            printf("Enter operand: ");
            scanf("%f", &num1);
            result = abs(num1);
            operatoor = ' ';
            break;
        case 9:
            printf("Enter operand: ");
            scanf("%f", &num1);
            result = floor(num1);
            operatoor = ' ';
            break;
        default:
            printf("Invalid choice");
            return 0;
    }

    printf("%.2f %c %.2f = %.2f", num1, operatoor, num2, result);

    return 0;
}

