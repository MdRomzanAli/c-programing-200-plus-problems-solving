#include<stdio.h>
#include<string.h>
void main(){
int a[5]={23,6,3,24,26};
int *p;
p=a;

printf("%d%d%d\n",*p,*(p+1),*(p+2));
printf("%d%d%d\n",*p,*p+1,*p+2);


}
