#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	float principal,rate,time,simpleinterest;
 	printf("enter the principal:");
 	scanf("%f",&principal);
 	
 	printf("enter the rate:");
	 scanf("%f",&rate);
	 
	 printf("enter the time:");
	 scanf("%f",&time);
	 
	 simpleinterest=(principal*rate*time)/100;
	 printf("the simple interest :%f.2f\n",simpleinterest);
	return 0;
}