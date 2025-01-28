#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>= && b>=0 || a<0 && b<0){
        printf("Same Size");
    }else{
        printf("Differnt Sign");
    }
    return 0;
}