#include<stdio.h>
int task(int n);
int main(){
int num,xy;
scanf("%d",&num);
xy=task(num);
printf("result%d",xy);
}
int task(int n){
if(n==0)
    return n;
else{

    return n+task(n-1);
    }

}
