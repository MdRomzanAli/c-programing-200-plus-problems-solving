#include<stdio.h>
#include<math.h>

typedef struct{
 float x;
 float y;
 }point;
 main()
 { point p,q;
 float dx,dy,d;
 printf("enter fast coordinate:");
 scanf("%f%f",&p.x,&p.y);
 printf("enter fast coordinate:");
 scanf("%f%f",&q.x,&q.y);
 dx=(p.x-q.x);
 dy=(p.y-q.y);
 d=sqrt(dx*dx+dy*dy);
 printf("thr result is :%.2f",d);









 }
