int main(int argc, char const *argv[])
{
    for ( int i = 0; i <20 ; i++)
    {
        if (i%2==0)
        {
            continue;
            //ele vai pular todos os números impares
        }
        printf("%d\n",i);
    }
    
    return 0;
}
