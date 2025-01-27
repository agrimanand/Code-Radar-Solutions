#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>0 && a<101){
        printf("In Range");
    }else{
        printf("out Of Range");
    }
    return 0;
}