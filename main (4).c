#include <stdio.h>

int main(void)
{
    struct{
        int matricula;
        char nome [30];
        char data_nasc[20];
        char cargo [20];
        float salario;
        
    }func;
    
    printf("Digite a sua matricula:");
    scanf("%i",&func.matricula);
    printf("Digite o nome:");
    scanf("%19s", &func.nome[0]);
    printf("Digite a Data de Nascimento:");
    scanf("%s", &func.data_nasc[0]);
    printf("Digite o cargo:");
    scanf("%s,"&func.cargo);
    printf("Digite o salario:");
    scanf("%f", &func.salario);
    
    printf("\n\nFuncionario:%s",func.nome);
    printf("\n\nMatricula:%i",func.matricula);
    printf("\n\nNascimento:%s", func.data_nasc);
    printf("\n\nCargo:%s", func.cargo);
    printf("\n\nSalario:%f",func.salario);
    
   
    return 0;
}

