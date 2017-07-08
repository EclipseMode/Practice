#include <stdio.h>

#define	FIBONACCI1(x)	do{printf("%d\n",FIBONACCI2(x-1) + FIBONACCI2(x-2));}\
			while(0)
#define	FIBONACCI2(x)	fibonacci4(x)

int 	fibonacci4	(int	x){
	return (x > 2) ? fibonacci4(x-1) + fibonacci4(x-2) :((x < 1) ? 0 : 1 ) ;
}

int	main		(void){
	int	input;
	scanf("%d",&input);
	if (input >= 0 && input <= 1) printf("%d\n",input);
	else if (input < 0) printf("INVALID INPUT!\n");
	else FIBONACCI1(input);
	return	0;	
}

