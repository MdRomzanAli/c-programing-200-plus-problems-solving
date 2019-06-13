main()
{ int count,n,i,c,x;
scanf("%d",&x);
 count=0;
 n=2;



    while(count<x){

    for(i=1;i<=n;i++){
    if(n%i==0){
    c++;
    }
    }
        if(c==2){
        printf("%d\n",n);
        count++;
    }
    n++;
    c=0;

}
}
