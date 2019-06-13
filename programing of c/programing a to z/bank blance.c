main(){
float b,r,x,b1,b2,bn;
int n;
printf("initial balace:");
scanf("%f",&b);

printf("rate:");
scanf("%f",&r);
r=r/100;
b1=b*r+b;
b2=b1*r+b1;
printf("n year :");
scanf("%d",&n);
bn=b*pow(r+1,n);
printf("%f\n%f\n %f",b1,b2,bn);




}
