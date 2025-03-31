#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[0]<=arr[1]<=arr[2]<=arr[3]<=arr[4]<=arr[5]<=arr[6]){
            printf("Sorted");
            break;
            
        }else {
            printf("Not Sorted");
        }

    }
    return 0;

}