#include<stdio.h>
#include<math.h>
int main ()
{
	float p;
	float rate;
	float time;
	float CI;
    
	 
    printf("enter the principle amount\n");
    scanf("%f",&p);
 
    printf("enter the rate of intrest\n");
    scanf("%f",&rate);
 
    printf("enter the time in year\n");
    scanf("%f",&time);
    
    CI=p*pow(1+rate/100,time);
    
    printf("compound intrest=%f",CI);
	
	
	return 0;
}
