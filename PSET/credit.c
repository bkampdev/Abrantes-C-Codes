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
#include <cs50.h>
#include <stdio.h>

bool check_luhn(long number);
string get_card_type(long number);

int main(void)
{
    // Get credit card number from user
    long number = get_long("Número: ");

    // Check if the number is valid using Luhn's algorithm
    if (check_luhn(number))
    {
        // Determine the type of card
        string card_type = get_card_type(number);
        printf("%s\n", card_type);
    }
    else
    {
        printf("INVÁLIDO\n");
    }
}

bool check_luhn(long number)
{
    int sum = 0;
    bool alternar = false;

    while (number > 0)
    {
        int digit = number % 10;
        if (alternar)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        sum += digit;
        alternar = !alternar;
        number /= 10;
    }

    return (sum % 10) == 0;
}

string get_card_type(long number)
{
    // Checar amex
    if ((number >= 340000000000000 && number < 350000000000000) ||
        (number >= 370000000000000 && number < 380000000000000))
    {
        return "AMEX";
    }
    // Checar mastercard
    else if (number >= 5100000000000000 && number < 5600000000000000)
    {
        return "MASTERCARD";
    }
    // Checar visa
    else if ((number >= 4000000000000 && number < 5000000000000) ||
             (number >= 4000000000000000 && number < 5000000000000000))
    {
        return "VISA";
    }
    else
    {
        return "INVÁLIDO";
    }
}