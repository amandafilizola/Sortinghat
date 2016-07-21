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
    printf("Qual as caracteristicas que voce mais preza:\n");
    pritnf("1.Coragem e cavalheirismo.\n");
    printf("2.Lealdade e justica.\n");
    printf("3.Inteligencia e criatividade.\n");
    printf("4.Astúcia e determinacao.\n");
    scanf("%d",&x);
    if(x==1)
        g+10;
    if(x==2)
        h+10;
    if(x==3)
        r+10;
    if(x==4)
        s+10;

    /*pergunta 2*/
    printf("O que voce mais espera fazer no primeiro dia de aula?\n");
    printf("1.Reecontrar minha turma e contar tudo sobre as ferias.\n");
    printf("2.Conhecer gente nova e fazer amizades.\n");
    printf("3.Aproveitar tudo que a escola oferece e estudar bastante.\n");
    printf("4.Exibir o material novo e minhas roupas novas para meus amigos(as).\n");
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
