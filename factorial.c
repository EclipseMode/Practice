#include <stdio.h>

#define TEST(x) do{printf("%d\n",FUNC(x));}\
		while(0)
#define FUNC(x) factorial(x)

int factorial(int x){
	return (x >= 2) ? x * factorial(x-1) : 1;
}

int main(void){
	TEST(6);
	return 0;
}
