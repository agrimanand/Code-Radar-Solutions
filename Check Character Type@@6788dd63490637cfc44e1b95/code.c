#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    } else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    } else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
        printf("Consonant");
    } else {
        printf("Special Character");
    }

    return 0;
}
