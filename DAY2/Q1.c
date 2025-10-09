/* Q3:Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include<stdio.h>
int main() {
	
	int length,breadth;
	printf("enter length");
	scanf("%d", &length);
	
	printf("enter breadth");
	scanf("%d", &breadth);
	
	int area = length * breadth;
	printf("area of rectangle is : %d \n", area);
	
	int perimeter = 2*length + 2*breadth;
	printf("perimeter of rectangle is : %d \n", perimeter);
	return 0;
	}
