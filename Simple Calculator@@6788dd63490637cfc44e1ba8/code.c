#include <stdio.h>
int main() {
    int a,b;
    char op;
    scanf("%d %d %c",&a &b &op);
    int answer=0;
    if(op=='+'){
        answer = a+b;
    }else if(op == '-'){
        answer =a-b;
    }else if(op=='%'){
        answer = a%b;
    }else if(op=='/'){
        answer=a/b;
    }else{
        answer = "error";
    }
    

    printf("%d",answer);
    return 0;
}