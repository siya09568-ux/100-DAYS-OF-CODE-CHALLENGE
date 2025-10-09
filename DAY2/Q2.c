/*Q4:write a program to calculate the area and circumference of a circle.*/

#include <stdio.h>
int main() {
	float radius;
	printf("enter radius of circle");
	scanf("%f", &radius);
	
	printf("area of circle is %f\n", 3.14 * radius * radius);
	printf("circumference of circle is %f\n", 2 * 3.14 * radius);
		
  return 0;
}
