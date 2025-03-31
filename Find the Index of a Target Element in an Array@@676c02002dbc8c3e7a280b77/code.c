#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    scanf("%d",&j);
    for(int i = 0;i<n;i++){
        if(arr[i]==j){
            printf("%d",i);
        }else{
            printf("%d",-1);
        }
    }

    return 0;
}