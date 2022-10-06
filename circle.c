#include <malloc.h>
#include "circle.h"


void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/
  for(int i=0;i<5;i++) {
    c[i].r=i+1; // Adds the value of i to all components of circle i
    c[i].p.x=i+1;
    c[i].p.y=i+1;
	
//	 printf("Circle %d has radius %d and centrepoint (%d,%d)\n",c+1,c[i].r,c[i].p.x,c[i].p.y);    
}
}

/*post: answer to exercise 6.c*/
int circleIsValid(const circle *c) {
  if(!(c->r > 0)){return 0;} // If r>0 then it is valid
  else {return 1;}
}

void translate(circle *c, const point *p) {
//answer to exercise 6.d
	c->p.x=c->p.x+p->x; // Adds the value of the point to all components of the centrepoint
	c->p.y=c->p.y+p->y;
}



