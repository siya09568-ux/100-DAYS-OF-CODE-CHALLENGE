/* Q5:Write a program to convert temperature from Celsius to Fahrenheit.*/

#include <stdio.h>
int main() {
	
	int celsius;
	printf("enter temperature in celsius");
	scanf("%d", &celsius);
	
	int fahrenheit = (celsius*1.8)+32;
	printf("temperature in fahrenheit is %d", fahrenheit);
	
	return 0;
	}
