void removeFromArray(int A[ ],int N,int V);

void removeFromArray(int A[ ],int N,int V){
    int t,i,j,idx;
    idx=-1;
    for(i=0;i<N;i++){
        if(V==A[i]){
            idx=i;
            break;}
    }
    if(idx==-1) {
        printf("NOT FOUND");
    }
    else {

    t=0;
    for(i=idx;i<N;i++){
        A[i]=A[i+1];
    }
    A[N-1]=t;

    printf("After change=\n");
    for(i=0;i<N;i++){
        printf("\n array[%d]= %d",i,A[i]);}
}
}

main(){
    int n,i,v;

    printf("Array Size?: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    printf("Array[%d]= ",i);
        scanf("%d",&a[i]);
    }

    printf("Input an Integer to search:");
    scanf("%d",&v);
    removeFromArray(a,n,v);
}
