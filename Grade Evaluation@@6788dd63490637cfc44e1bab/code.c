#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='A' || a=='a'){
        printf("Excellent");
    }else if(a=='B'){
        printf("Good");
    }else if(a=='c'){
        printf("Average");
    }else if(a=='D'){
        printf("Below Average");
    }else if(a=='E'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
    return 0;
}