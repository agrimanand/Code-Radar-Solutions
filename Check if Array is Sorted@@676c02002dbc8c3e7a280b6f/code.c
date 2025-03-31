#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[0]<arr[n-1]){
            printf("Sorted");
            break;
            
        }else {
            printf("Not Sorted");
        }

    }
    return 0;

}