#include<stdio.h>
#include<string.h>
void main(){
char a[]="the sky is limit";
char *p,*q;
p=q=a;
while(*p)p++;
printf("leanth is%d",(p-q));}

