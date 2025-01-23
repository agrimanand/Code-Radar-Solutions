#include <stdio.h>
int main() {
    float x,y,z;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    float a = (x+y+z)/3;

    printf("Average: %.2f",a);
    return 0;
}