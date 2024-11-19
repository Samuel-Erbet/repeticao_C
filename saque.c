int main( )
{
    float soma = 0, valor;
    int opcao;

    do{
        printf("\n Digite uma operação");
        printf("\n 1. Deposito");
        printf("\n 2. Saque");
        printf("\n 3. Saldo");
        printf("\n 4. Sair");
        printf("\n qual opcao?");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\n qual o valor do deposito? ");
                scanf("%f", &valor);
                soma = soma +valor;
                break;
        
            case 2:
                printf("\n valor do saque ?");
                scanf("%f", &valor);
                soma = soma - valor;
                break;
            
            case 3:
                printf("Saldo atual = R$ %.2f \n", soma);
                break;
            
            default:
                if (opcao != 4){
                    printf("\n opcao invalida! \n");
                }

         
        }

    }while (opcao != 4);

    printf("\n\nFim das operacoes!\n\n");
    return 0;
}
