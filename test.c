#include <stdio.h>
#define AA(x,y) do {printf("%d %d\n",x,y);BB(x,y);} while(0)
#define BB(x,y) (cal(++x,++y))

void cal(int x,int y){
	if (x > 50 || y > 90) return;
	AA(x,y);
	return;
}

int main(void){
	int x;
	int y;
	x = 10;
	y = 50;
	AA(x,y);
	return 0;
}

