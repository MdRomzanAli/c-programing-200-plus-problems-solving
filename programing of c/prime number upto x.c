main()
{ int x,n,i,c,c2;
scanf("%d",&x);
for(n=1;n<=x;n++){

c=0;
for(i=1;i<=n;i++){
 if(n%i==0){
 c++;
 }
}


if(c==2){
printf("%d\n",n);

}
}









}
