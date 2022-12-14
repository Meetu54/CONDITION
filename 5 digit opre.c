#include<stdio.h>
main(){
	
	int a,b,c,d,e;

		printf("ENTER VALUE A: ");
		scanf("%i",&a);		
		
		printf("ENTER VALUE B: ");
		scanf("%i",&b);		
		
		printf("ENTER VALUE C: ");
		scanf("%i",&c);		
		
		printf("ENTER VALUE D: ");
		scanf("%i",&d);		
		
		printf("ENTER VALUE E: ");
		scanf("%i",&e);		


		a>b
		?
		a>c
		?
		a>d
		?
		a>e
		?
			printf(" A IS MAX ")
		:
			printf(" E IS MAX ")
		:
		d>e
		?
			printf(" D IS MAX ")
		:
			printf(" E IS MAX ")
		:
		b>c
		?
		b>d
		?
		b>e
		?
			printf(" B IS MAX ")
		:
			printf(" E IS MAX ")
		:
		d<e
		?
			printf(" D IS MAX ")
		:
			printf(" E IS MAX ")
		:
		c>d
		?
		c>e
		?
			printf(" C IS MAX ")
		:
			printf(" E IS MAX ")
		:
		d>e
		?
			printf(" D IS MAX ")
		:
			printf(" E IS MAX ");

	


	
}
	
