#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
        if(ch == 'a'||ch == 'e'||ch=='i'||ch=='o'||ch=='u'){
            printf("Vowel");
        }else if(ch == 'A' || ch=='I' || ch=='E'|| ch=='U'|| ch=='O'){
            printf("Vowel");
        }else{
            printf("Consonant");
    }
    return 0;
}