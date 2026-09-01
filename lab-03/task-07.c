#include <stdio.h>
main(){
	int age;
	float height;
	printf("Enter your age and height: ");
	scanf("%d %f",&age,&height);
	printf("Your age is %d and height is %.2f",age,height);
	return 0;
}
