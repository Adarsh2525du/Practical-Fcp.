#include <stdio.h>

float interest(float p, float r, float t);
float interest(float p, float r, float t)
{   float interest ;
    interest = ( p * r * t) / 100 ;

    return interest ;
}
int main()  
{
    float pr, ra, ti, in;
    printf("Enter principal, rate and time respectively\n");
    scanf("%f", &pr);
    scanf("%f", &ra);
    scanf("%f", &ti);
  
    printf("Interest is: %f", interest(pr , ra , ti));

    return 0; 
}
