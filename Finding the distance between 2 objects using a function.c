#include <stdio.h>
#include <math.h>

float control(float a1, float b1, float a2, float b2);

int main(){
    
    float x1, y1, x2, y2;
    printf("Enter the cordinates of the first object: \n");
    scanf("%f%f", &x1, &y1);
    printf("Enter the cordinates of the second object: \n");
    scanf("%f%f", &x2, &y2);

    float result = control(x1, y1, x2, y2);

    printf("The distance between two objects is: %f \n", result);


return 0;}

float control(float a1, float b1, float a2, float b2){
    
    float distance = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));

return distance;}