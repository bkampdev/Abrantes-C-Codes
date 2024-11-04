/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Guilherme Cardoso Bremenkamp
 *    Matrícula: 202420015
 *    Turma: CC1M
 *    Email: bkampproducer@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;
    // Solicita o tamnho da piramide de 1 a 8
    do
    {
        altura = get_int("Altura: ");
    }
    while (altura < 1 || altura > 8);

    // Imprime a pirâmide
    for (int i = 1; i <= altura; i++)
    {
        // Imprime os espacos antes do # da esquerda
        for (int j = 0; j < altura - i; j++)
        {
            printf(" ");
        }

        // Imprime os # da esquerda
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Imprime os dois espacos entre as piramides
        printf("  ");

        // Imprime os # da direita
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Nova linha apos cada andar da piramide
        printf("\n");
    }

    return 0;
}