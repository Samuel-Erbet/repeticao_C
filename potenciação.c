int main()
{
    int i, x, z;
    long int res =1;

    printf("digite o valor de X: ");
    scanf("%d", &x); //2
    
    printf("digite o valor de Z: ");
    scanf("%d", &z);  //3

    for ( i = 0; i < z; i++)
    {
        res =res* x;
    }
    
    printf("%d elevado a %d e igual a %ld\n",x, z, res);
    return 0;
}
