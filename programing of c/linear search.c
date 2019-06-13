#include<stdio.h>
#include<stdlib.h>
#define N 12
main()
{
int a[N]={10,20,30,40,50,60,70,5,90,100,120,456};
int i,idx,target;
printf("what do you want to search:");
scanf("%d",&target);
idx=-1;

  for(i=0;i<N;i++){
  if(a[i]==target){

  idx=i;
  break;
  }
  }
  if(idx==-1)
  printf("target not found");
else
   printf("target found  at index :%d\n\n",idx);




}
