#include<stdio.h>
long fibonacci(long);
int main(){
long result,number;
printf("inter an integer:");
scanf("%ld",&number);
result=fibonacci(number);
printf("fibonacci(%ld)=%ld",number ,result);
}
long fibonacci(long n){
if(n==0||n==1)
    return n;
else return fibonacci(n-1)+fibonacci(n-2);


}
