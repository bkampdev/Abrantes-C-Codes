/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
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


/**
 * Inclusão de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>

/**
 * Função main
 */
int main(void)
{
    // TODO: escreva aqui o código que solicita o peso da pessoa (em kg).
    // Seu código só deve aceitar valores válidos entre 40,0 e 200,0 kg
    // (inclusive). Se o peso informado não estiver nessa faixa ou se o usuário
    // informar um dado inválido, seu programa deve continuar a solicitar o peso
    // até que ele informe um peso válido.
    float peso;
    do
    {
        peso = get_float("Informe seu peso (kg): ");
    }
    while (peso < 40.0 || peso > 200.0);
    
    // TODO: escreva aqui o código que solicita a altura da pessoa (em m)
    // Seu código só deve aceitar valores válidos entre 1,40 e 2,50 m
    // (inclusive). Se a altura informada não estiver nessa faixa ou se o
    // usuário informar um dado inválido, seu programa deve continuar a
    // solicitar a altura até que ele informe uma altura válida.
    float altura;
    do
    {
        altura = get_float("Informe sua altura (m): ");
    }
    while (altura < 1.40 || altura > 2.50);
    
    // TODO: escreva aqui o código que calcula o IMC e imprime a classificação
    // da obesidade no terminal, conforme as especificações do exercício.
    float imc = peso / (altura * altura);
    
    string classificacao;
    if (imc < 16.0)
    {
        classificacao = "Magreza grau III";
    }
    else if (imc < 17.0)
    {
        classificacao = "Magreza grau II";
    }
    else if (imc < 18.5)
    {
        classificacao = "Magreza grau I";
    }
    else if (imc < 25.0)
    {
        classificacao = "Peso adequado";
    }
    else if (imc < 30.0)
    {
        classificacao = "Pré-obeso";
    }
    else if (imc < 35.0)
    {
        classificacao = "Obesidade grau I";
    }
    else if (imc < 40.0)
    {
        classificacao = "Obesidade grau II";
    }
    else
    {
        classificacao = "Obesidade grau III";
    }
    
    printf("IMC: %.2f; Classificação: %s.\n", imc, classificacao);
    
    // Termina o programa:
    return 0;
}

