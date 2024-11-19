int main(int argc, char const *argv[])
{
    int total_disciplinas=0, limite_alunos=100, total_alunos=0;

    
    printf("sistema de contagem de alunos matriculados\n");
    printf("insira o numero de disciplinas disponíveis\n");
    scanf("%d", &total_disciplinas);

    for (int i = 1; i <=total_disciplinas; i++)
    {
        int alunos_matriculados;
        printf("digite o numero de estudantes matriculados na materia %d:\n",i);

        scanf("%d",&alunos_matriculados);
        
        if (alunos_matriculados<0){
            printf("ERRO, o numero de alunos matriculados não pode ser maior ou menor que 0.\n");
            continue;
        }

        total_alunos+=alunos_matriculados;

        if (total_alunos>=limite_alunos)
        {
            printf("Limite de alunos atingidos, Encerrando a contagem do programa.\n");
            break;
        }
    }
        printf("o Total de alunos matriculados foram %d\n", total_alunos);
        printf("o total de disciplinas contadas foram %d\n", total_disciplinas);
        
        return 0;

    }
    
