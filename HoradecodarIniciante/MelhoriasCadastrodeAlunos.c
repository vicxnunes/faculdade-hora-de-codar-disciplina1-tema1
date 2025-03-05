#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para capturar um número inteiro com validação
int ler_inteiro(const char *mensagem) {
    int valor;
    printf("%s", mensagem);
    while (scanf("%d", &valor) != 1) {
        printf("Entrada inválida! Digite um número inteiro válido.\n");
        while (getchar() != '\n'); // Limpa o buffer
    }
    return valor;
}

// Função para capturar um número float com validação
float ler_float(const char *mensagem) {
    float valor;
    printf("%s", mensagem);
    while (scanf("%f", &valor) != 1) {
        printf("Entrada inválida! Digite um número válido.\n");
        while (getchar() != '\n'); // Limpa o buffer
    }
    return valor;
}

// Função para capturar uma string (aceitando espaços)
void ler_string(const char *mensagem, char *destino, int tamanho) {
    printf("%s", mensagem);
    while (getchar() != '\n'); // Limpa o buffer de entrada
    fgets(destino, tamanho, stdin);
    destino[strcspn(destino, "\n")] = '\0'; // Remove o '\n' do final
}

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    idade = ler_inteiro("Digite sua idade: ");
    altura = ler_float("Digite sua altura: ");
    ler_string("Digite seu nome completo: ", nome, sizeof(nome));
    matricula = ler_inteiro("Digite sua matrícula: ");

    printf("\n=== DADOS DO ALUNO ===\n");
    printf("Nome: %s\nMatrícula: %d\nIdade: %d anos\nAltura: %.2f metros\n", 
            nome, matricula, idade, altura);

    system("pause"); // Mantém o terminal aberto no Windows
    return 0;
}