#include <stdio.h>
#include <stdlib.h>
//2� problema: desenvolva um programa que leia uma sequ�ncia de n�meros,
//podendo terminar com o n�mero 0 ou 9. Para cada n�mero lido (diferente de 0 ou 9),
//mostre seu sucessor caso o n�mero seja par, ou seu antecessor se o n�mero for �mpar.

int main()
{
    int num;
    do
    {
        printf("Digite um numero\n");
        scanf("%d",&num);
        if (num!=0 && num!=9)
        {
            if(num%2 == 0)
            {
                printf("O sucessor e = %d\n",num + 1);
            }
            else
            {
                printf("O antecessor e = %d\n",num -1);
            }

        }

    }
    while (num!=0 && num!=9);
    //comandos execultados apos a repeti��o
    return 0;
}
