#include <stdio.h>
#include <string.h>

char *my_gets(char *s) {
    int c;
    char *p = s;

    while ((c = getchar()) != '\n' && c != EOF) {
        *p++ = c;
    }
    *p = '\0';
    return s;
}

void consulta_nome(char *s) { // Supor que venha um nome do banco
        strcpy(s, "Gabriel");
}

int main() {
        char var_outrasInfos[10];
        char var_nome[10];

        consulta_nome(var_nome);
        
        printf("Usuário: %s \n", var_nome);

        printf("Digite mais informações -> ");

        my_gets(var_outrasInfos);

        printf("==Dados Atualizados== \n");

        printf("Nome: %s \nOutras Informacoes: %s \n", var_nome, var_outrasInfos);

        printf("==Fim do Programa==\n");
        return 0;
}
