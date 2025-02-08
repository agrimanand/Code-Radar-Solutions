#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=A && a<=F){
        switch(a){
            case A:
            printf("Excellent");
            break;
            case B:
            printf("Good");
            case C:
            printf("Average");
            break;
            case D:
            printf("Below Average");
            case E:
            printf("Fail");
            break;
        }
    }else{
        printf("Invalid grade");
    }
    return 0;
}