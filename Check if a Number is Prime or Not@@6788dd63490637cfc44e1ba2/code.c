#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%4==0 || a%3!=0 || a%5!=0 ){
        printf("Prime");
    }else if(a%4!=0){
        printf("Not prime");
    }else{
        printf("Prime");
    }
    return 0;
}