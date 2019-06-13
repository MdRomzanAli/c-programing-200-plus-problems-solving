typedef struct{
char name[40];
double b;
}bankaccount;
main(){
bankaccount b1,b2;
printf("Enter name of first Person:");
gets(b1.name);
printf("Enter balance: ");
scanf("%lf%*c",&b1.b);
printf("Enter name of second Person:");
gets(b2.name);
printf("Enter balance: ");
scanf("%lf",&b2.b);
if(b1.b>b2.b)
printf("%s is richer",b1.name);
else if(b2.b>b1.b)
printf("%s is richer",b2.name);
else
printf("they are equally rich!");

}
