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
    if(ch==' ')
    w++;

    else if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    v++;
    else
    c++;

    }

    printf("words:%d\n",w+1);
    printf("letter:%d\n",v+c);
       printf("vowel:%d\n",v);
       printf("consonent:%d\n",c);

}
