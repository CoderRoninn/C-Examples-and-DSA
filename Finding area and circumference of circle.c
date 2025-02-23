#include <stdio.h>

#define PI 3.14

int main(){
    
    float circumference, area, r;
    printf("Enter the radius of circle: \n");
    scanf("%f", &r);

    area = PI * r * r;
    circumference = 2 * PI* r;

    printf("The area of circle is:%.2f \n", area);
    printf("The circumference of circle is:%.2f", circumference);


return 0;}