#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%.2f",&x);
    scanf("%.2f",&y);
    scanf("%.2f",&z);
    int a = (x+y+z)/3;

    printf("Average: ",a);
    return 0;
}