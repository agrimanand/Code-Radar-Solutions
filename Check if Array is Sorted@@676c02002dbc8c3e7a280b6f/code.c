#include <stdio.h>

int main() {
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
    fprintf(stderr, "%d ",arr[i]);
    }
    return 0;
}