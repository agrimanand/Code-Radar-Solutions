#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c;
    scanf("%d",&c);
    for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==c){
                printf("%d %d",arr[i] , arr[j]);
                break;
            }
        }
    }
    return 0;

}