main()
{

    char a[100],s[20],t[20];
    int i,j,k=0,c=0,p=0,m,n;

    printf("Enter a string: ");
    gets(a);
    n=strlen(a);
    for(i=0;i<=n;i++)
    {
	if(a[i]==' '||a[i]=='\0')
	{
	    for(j=c;j<i;j++)
	    {
		t[k]=a[j];
		if(c==0)
		{s[k]=a[j];
	        }
		k++;
	    }
	    m=i-c;
	    if(c==0)
	    {
		p=m;
	    }
	    else if(m<p)
	    {
		for(j=0;j<m;j++)
		{
		   s[j]=t[j];
		}
		p=m;
	    }

	    k=0; c=i+1;
	}
    }
   printf("Smallest word: ");
    for(i=0;i<p;i++)
    {
	printf("%c",s[i]);
    }
}
