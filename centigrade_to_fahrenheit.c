#include<stdio.h>
 int main()
 {    
 	float celsius, fahrenheit;
	scanf("%f", &celsius);
	fahrenheit = (celsius * 9 / 5) + 32;
	printf("%0.2f", fahrenheit);
	return 0;
 }