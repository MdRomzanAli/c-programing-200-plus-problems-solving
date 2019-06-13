#include<stdio.h>
main()
{ float a,b,c,d,e,_f;
   scanf("%f",&a);
    if(a<2000)
    d=a*.04;
    else if(a<=7000){
     c=a-2000;
     d=(c*.08)+(2000*.04);


    }

 else if(a>7000){
     e=a-7000;
     d=(e*.15)+(5000*.08)+(2000*.04);
}

   _f=a-d;
    printf("%f",_f);

  return 0;

}
