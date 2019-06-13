main()
{ int n,p1,p2,next,i;
    scanf("%d",&n);
    p1=1;
    p2=1;
    for(i=3;i<=n;i++){
    next=p1+p2;
    p1=p2;
    p2=next;


    }

  printf("%d",next);





}
