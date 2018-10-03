//* two_func.c -- a program using two functions in one file */
// main()에서 butler() 함수 호출을 실행하여 확인

#include <stdio.h>
#include <stdlib.h>

#define SECONED 31560000

void butler(float);

int main() {
	float my_age;
	printf("Enter your age : ");					
	scanf("%f", &my_age);

	printf("1 year is approximately 31,560,000 seconds\n");
	butler(my_age);
	
	system("pause");
	return 0;
}

void butler(float age){      /* start of function definition */

	printf("And your age is %.f\n", age);
	printf("\nSo, %.f years is %.f seconds.\n", age, age*SECONED);
	printf("Thanks.. ");
}

