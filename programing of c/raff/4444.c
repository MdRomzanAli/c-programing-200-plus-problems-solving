main()
{ float x,p,i,e;
   printf(" inter x:");
   scanf("%f",&x);
   p=1;
   if(x>0){
   for(i=1;i<=x;i++){
    e=2.71;
    p=e*p;


   }


printf("result of e^%.f:%f",x,p);
   }
 else
   printf("Invalid");



}
