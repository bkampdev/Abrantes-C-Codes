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

// Comece aqui seu programa.
#include <stdio.h>

int main() 
{
    int n, i, f;

    printf("Você quer a tabuada de qual número?\n");
    if (scanf("%d", &n) != 1) 
    {
        printf("Erro na especificação da tabuada.\n");
        return 0;
    }

    printf("Você quer começar a tabuada em qual número?\n");
    if (scanf("%d", &i) != 1) 
    {
        printf("Erro na especificação da tabuada.\n");
        return 0;
    }

    printf("Você quer terminar a tabuada em qual número?\n");
    if (scanf("%d", &f) != 1) 
    {
        printf("Erro na especificação da tabuada.\n");
        return 0;
    }

    if (n < 1 || n > 99 || i < 0 || i > 10 || f < 0 || f > 10 || f < i) 
    {
        printf("Erro na especificação da tabuada.\n");
        return 0;
    }

    for (int j = i; j <= f; j++) 
    {
        printf("%d x %d = %d\n", n, j, n * j);
    }

    return 0;
}