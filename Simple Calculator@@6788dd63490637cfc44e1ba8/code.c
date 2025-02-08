#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two integers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &a, &b, &op);
    int answer;
    if (op == '+') {
        answer = a + b;
    } else if (op == '-') {
        answer = a - b;
    } else if (op == '*') {
        answer = a * b;
    } else if (op == '/') {
        if (b == 0) {
            printf("error");
            return 0;
        }
        answer = a / b;
    } else {
        printf("Error: Invalid operator\n");
        return 1;
    }

    printf("%d\n", answer);
    return 0;
}
