#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf ("*** Programa de Cálculo de Média ***\n");

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);    

    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.2f\n", media); // nem sempre a média vai ser um número inteiro e nem as notas. Eu coloquei 2f para mostrar 2 casas decimais mas poderia ser 1f, 3f, 4f, etc.


    return 0;
}