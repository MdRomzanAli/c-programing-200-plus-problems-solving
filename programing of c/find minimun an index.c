#include<stdio.h>
#include<stdlib.h>
#define N 12
main()
{
int a[N]={10,20,30,40,50,60,70,5,90,100,120,456};
int i,idx=0;
int min=a[0];
  for(i=0;i<N;i++){
  if(a[i]<min){
  min=a[i];
  idx=i;
  }
  }
  printf("the minimum value of arrey is %d.\n\n",min);
   printf("it is located at index :%d\n\n",idx);




}
