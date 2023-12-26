#include <stdio.h>
int main()
{
    int n[5],max=0,min; float avg=0.0;
    printf("Enter 5 numbers");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int j=0;j<5;j++){
    if(max<n[j]){
    max=n[j];
    }
    min=n[0];
    if(min>n[j]){
        min=n[j];
    }
    avg=avg+n[j];
    }
    avg=avg/5;
    printf("Greatest number is %d\n",max);
    printf("Smallest number is %d\n",min);
    printf("Average of the array is %f",avg);
}