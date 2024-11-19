int main(int argc, char const *argv[])
{
    int  res=0, num, i, j, fim ;

    printf("escolha até qual tabuada você quer ver: ");
    scanf("%d",&fim);
    
    for ( j = 1; j <= fim; j++)
    {
        printf("tabuada do %d\n", j);
        for (i = 1; i <= 10; i++)
        {
            res = j *i;
            printf("%d\n",res);

        }
    }
    
    
    return 0;
}
