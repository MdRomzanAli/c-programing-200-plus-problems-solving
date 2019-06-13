#include<stdio.h>
#include<stdlib.h>
#define N 12
main()
{
int a[N]={10,20,30,40,50,60,70,80,90,100,120,456};
int i;
int min=a[0];
  for(i=0;i<N;i++){
  if(a[i]<min)
  min=a[i];
  }
  printf("the minimum value of arrey is %d\n",min);





}
