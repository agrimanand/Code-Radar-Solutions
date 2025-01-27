#include <stdio.h>

int main() {
    int a;
    Str b = "Even";
    Str c = "Odd";
    scanf("%d",&a);
    if(a%2==0){
        printf("%d",b);
    }else{
        printf("%d",c);
    }
    return 0;
}