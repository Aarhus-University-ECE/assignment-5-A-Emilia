#include <stdio.h>
#include<malloc.h>
#include "circle.h"
#include"jollyjumper.h"
#include "jollyJumper.c"
#include "circle.c"
#include <assert.h>


void printCircle(circle c) {
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	circle c[5];
	fiveCircles(c);
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	point p;
	p.x = 2;
	p.y = 2;

	translate(&c[1], &p);
	printCircle(c[1]);
	printf("isValid: %d\n", circleIsValid(&c[1]));
	
	/*answer to exercise 7.b*/
	int n;
	printf("What is the size of your sequence?\n") ;
  	scanf("%d",&n);
	assert(n>2 && n<100);

	int *numbers = malloc(sizeof(int) * n); // Allocates memory for the numbers

	printf("Enter %d numbers\n",n);
	for(int i=0;i<n;i++)
    	scanf("%d",&numbers[i]); // Stores the numbers

	if (isJollyJumper(numbers, n)) {
		printf("It is a Jolly Jumper");}
	else {
		printf("Not a Jolly Jumper");}
	return 0;
}
