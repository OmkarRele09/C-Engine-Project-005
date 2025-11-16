#include <stdio.h>
int main(){
float weight , height , BMI;
printf("Enter weight in kgs\n");
scanf("%f", &weight);
printf("Enter height in meters\n");
scanf("%f" ,&height);
BMI = weight/(height*height);
printf("The BMI is %f\n" , BMI);
    return 0;
}