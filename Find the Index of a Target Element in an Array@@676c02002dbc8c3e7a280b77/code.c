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
    int index = -1
    for(int i = 0;i<n;i++){
        if(j==arr[i]){
            printf("%d",i);
            break;
        
        }
    }

    return 0;
}