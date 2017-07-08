#include <stdio.h>

#define	FIBONACCI1(x)	do{printf("%d\n",FIBONACCI2(x-1) + FIBONACCI2(x-2));}\
			while(0)
//			Definition of fibonacci progression : F(n) = F(n-1) + F(n-2)

#define	FIBONACCI2(x)	fibonacci4(x)
//			Substitute fibonacci4(x) -> FIBONACCI2(x)

int 	fibonacci4	(int	x){
	return (x > 2) ? fibonacci4(x-1) + fibonacci4(x-2) :((x < 1) ? 0 : 1 ) ;
}
//	Calculate fibonacci progression

int	main		(void){
	int	input;
	scanf("%d",&input);

//	Exception Handling
/*	==================================================	*/
	if (input >= 0 && input <= 1) printf("%d\n",input);
	else if (input < 0) printf("INVALID INPUT!\n");
/*	==================================================	*/

	else FIBONACCI1(input);
	return	0;	
}

