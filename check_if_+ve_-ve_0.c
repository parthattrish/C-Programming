#include <stdio.h>

int main() {
    int number;
    int sign;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        sign = 1;
    } else if (number < 0) {
        sign = -1;
    } else {
        sign = 0;
    }
    switch (sign) {
        case 1:
            printf("The number is positive.\n");
            break;
        case -1:
            printf("The number is negative.\n");
            break;
        case 0:
            printf("The number is zero.\n");
            break;
        default:
            printf("Error: Invalid input.\n");
    }

    return 0;
}
