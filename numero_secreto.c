int main(int argc, char const *argv[])
{
    int tentativa, numero_secreto = 13;
    
    while(1){
        printf("chute qual e o numero secreto!");
        scanf("%d", &tentativa);
        if (tentativa == numero_secreto)
        {
            printf("parabens voce acertou!");
            break;
        } else{
            printf("Voce Errou!\n tente novamente!");
        }
    }
    return 0;
}
