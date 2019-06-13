main(){
float a,b,c,d,e,f;
printf("enter ammount:");
scanf("%f",&a);
if(a<=2000){
d=a*.04;
f=a-d;
}
else if(a<=7000){
b=a-2000;
d=(b*.08)+(2000*.04);
f=a-d;
}
else if(a>7000){
e=a-7000;
d=(e*.15)+(5000*.08)+(2000*.04);
f=a-d;
}
printf("disscount:%f",f);
}
