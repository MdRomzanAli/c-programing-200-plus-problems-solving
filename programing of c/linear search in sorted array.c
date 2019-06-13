#include<stdio.h>
#include<stdlib.h>
#define N 12
main()
{
int a[N]={4,7,8,10,14,21,22,36,62,77,81,91};
int i,idx,target;
printf("what do you want to search:");
scanf("%d",&target);
idx=-1;

  for(i=0;i<N;i++){
  if(a[i]==target){

  idx=i;
  break;
  }
  else if(a[i]>target)
  break;
  }
  if(idx==-1)
  printf("target not found");
else
   printf("target found  at index :%d\n\n",idx);




}
