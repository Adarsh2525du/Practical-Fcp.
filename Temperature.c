#include<stdio.h>
float f_c(int f)
{
    return ((f-32)*(5.0/9.0));
}
float c_f(int c)
{
    return ((c*(9.0/5.0))+32);
}
void main()
{
    float tc,tf;
    printf("Enter the temperature in Celcius:");
    scanf("%f",&tc);
    float t=c_f(tc);
    printf("\nTemperature in Farenheit: %f",t);
    printf("\nEnter the temperature in Farenheit:");
    scanf("%f",&tf);
    float t1=f_c(tf);
    printf("\nTemperature in Farenheit: %f",t1);
}