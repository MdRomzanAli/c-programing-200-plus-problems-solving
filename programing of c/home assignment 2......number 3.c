int main()
{
    char t[80],ch;
    int n,w,v,c,i;
    gets(t);
    n=strlen(t);
    w=0;v=0;c=0;
    ch=0;
    for(i=0;i<n;i++)
    {ch=t[i];
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    w++;

    else if(ch>='0'&&ch<='9')
    v++;
    else
    c++;

    }

    printf("alphabets:%d\n",w);
    printf("digit:%d\n",v);
       printf("special characters:%d\n",c);


}
