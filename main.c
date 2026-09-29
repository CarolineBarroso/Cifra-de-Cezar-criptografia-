#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    char palavra[16];
    char criptografada[16];

    int shift;
    int i, j;
    int termoPA;
    int novaPosicao;

    int a1 = 1;
    int razao = 1;

    FILE *arquivo;
    FILE *log;

    printf("Digite uma palavra de ate 15 letras: ");
    scanf("%15s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        palavra[i] = tolower(palavra[i]);
    }

    printf("Digite o SHIFT: ");
    scanf("%d", &shift);

    for (i = 0; i < strlen(palavra); i++) {
        
        termoPA = a1 + i * razao;

        for (j = 0; j < 26; j++) {

            if (palavra[i] == alfabeto[j]) {

                novaPosicao = (j + shift + termoPA) % 26;

                criptografada[i] = alfabeto[novaPosicao];

                break;
            }
        }
    }

    criptografada[i] = '\0';

    printf("\nPalavra criptografada: %s\n", criptografada);

    arquivo = fopen("resultado_criptografia.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar resultado_criptografia.txt!\n");
        return 1;
    }

    fprintf(arquivo, "Palavra codificada: %s\n", criptografada);
    fprintf(arquivo, "SHIFT: %d\n", shift);
    fprintf(arquivo, "Letras: %d\n", (int)strlen(palavra));
    fprintf(arquivo, "Tipo: PA\n");

    fclose(arquivo);

    log = fopen("log_execucao.txt", "w");

    if (log == NULL) {
        printf("Erro ao criar log_execucao.txt!\n");
        return 1;
    }

    fprintf(log, " LOG DE EXECUCAO \n");
    fprintf(log, "Palavra original: %s\n", palavra);
    fprintf(log, "Palavra codificada: %s\n", criptografada);
    fprintf(log, "SHIFT: %d\n", shift);
    fprintf(log, "Primeiro termo da PA: %d\n", a1);
    fprintf(log, "Razao da PA: %d\n", razao);
    fprintf(log, "Letras: %d\n", (int)strlen(palavra));
    fprintf(log, "Tipo: PA\n");
   
    fclose(log);

    printf("Resultado salvo em resultado_criptografia.txt\n");
    printf("Log salvo em log_execucao.txt\n");

    return 0;
}
