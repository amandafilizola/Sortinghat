/*
Autora: Amanda de Paiva Filizola
The Sorting Hat
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,g,s,r,h;
    printf("Voce esta comecando o questionario para determinar sua Casa. Responda o mais honestamente possivel, pois do contrario, recebera uma Casa na qual nao se encaixa./nDigite o numero da resposta escolhida e pressione <enter>.");

    /*comeco do questionario*/
    /*pergunta 1 */
    printf("Qual a caracteristica que voce mais preza:\n");
    pritnf("1.Coragem.\n");
    printf("2.Lealdade.\n");
    printf("3.Inteligencia.\n");
    printf("4.Astúcia.\n");
    scanf("%d",&x);
    if(x==1)
        g+10;
    if(x==2)
        h+10;
    if(x==3)
        r+10;
    if(x==4)
        s+10;

}
