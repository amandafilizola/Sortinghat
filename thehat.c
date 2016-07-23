/*
Autora: Amanda de Paiva Filizola
The Sorting Hat
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,g,s,r,h;
    printf("Voce esta comecando o questionario para determinar sua Casa. Responda o mais honestamente possivel, pois do contrario, recebera uma Casa na qual nao se encaixa.\nDigite o numero da resposta escolhida e pressione <enter>.");

    /*comeco do questionario*/
    /*pergunta 1 */
    printf("Qual as caracteristicas que voce mais preza:\n\n");
    pritnf("1.Coragem e cavalheirismo.\n");
    printf("2.Lealdade e justica.\n");
    printf("3.Inteligencia e criatividade.\n");
    printf("4.Astúcia e determinacao.\n");
    scanf("%d",&x);
    if(x==1)
        g+20;
    if(x==2)
        h+20;
    if(x==3)
        r+20;
    if(x==4)
        s+20;

    /*pergunta 2*/
    printf("O que voce mais espera fazer no primeiro dia de aula?\n\n");
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

    /*pergunta 3*/
    printf("É fácil começar uma amizade com voce?\n\n");
    printf("1.Sim, mas acho que precisamos conversar bastante primeiro.\n");
    printf("2.Com certeza!Estou sempre pronto para novas amizades.\n");
    printf("3.Talvez. A pessoa so precisa ter as qualidades certas e nao ser apenas perda do meu tempo.\n");
    printf("4.Talvez. Um bom jeito de comecar e me pedir ajuda com atividades que sou bom.\n");
    scanf("%d",&x);
    if(x==1)
        g+5;
    if(x==2)
        h+10;
    if(x==3)
        r+10;
    if(x==4)
        s+10;

    /*pergunta 4*/
    printf("Voce tem inimizades na sua escola ou trabalho?\n\n");
    printf("1.Sim. Nao me orgulho disto porem sempre rola uma rixa com outras turmas.\n");
    printf("2.Detesto brigas e evito conflitos!Tem gente que me acha bobo por isso, porem nao ligo.");
    printf("3.Evito conflitos. Sou muito 'na minha'.\n");
    printf("4.Nao.O que vem de baixo nao pode me atingir.\n");
  
    scanf("%d",&x);
    if(x==1)
        g+10;
    if(x==2)
        h+20;
    if(x==3)
        r+10;
    if(x==4)
        s+10;
    
    /*pergunta 5*/
    printf("Um aluno novo e timido entrou na sala. Como voce procede para integra-lo a turma?\n\n");
    printf("1.Procuro pontos em comum com ele e me apresento fazendo uma piadinha.\n");
    printf("2.Converso com ele na mesma hora, dou risadas e faço o melhor para deixa-lo a vontade. todo mundo e bem-vindo!\n");
    printf("3.Ofereço ajuda em alguma materia e digo tudo o que sei sobre a escola e seus professores.\n");
    printf("4.Ignoro-o a principio. Se ele valer a pena, me aproximo.\n");

    scanf("%d",&x);
    if(x==1)
        g+15;
    if(x==4)
        h+20;
    if(x==3)
        r+15;
    if(x==2)
        s+15;

    /*pergunta 6*/
    printf("Estudar é o que para você?\n\n");
    printf("1.Mais prazeroso quando se está com amigos.\n");
    printf("2.Uma etapa para cumprir antes de tentar voos mais altos.\n");
    printf("3.Um prazer para mim aprender coisas novas.\n");
    printf("4.Algo que pessoas comuns precisam fazer para ganhar a vida.\n");

    scanf("%d",&x);
    if(x==1)
        g+10;
    if(x==4)
        h+10;
    if(x==3)
        r+10;
    if(x==2)
        s+10;

    /*pergunta 7*/
    printf("Como você se vê no futuro?\n\n");
    printf("1.Trabalhando em algo que seja minha paixao, mesmo que exija muito de mim.\n");
    printf("2.em um emprego que me de serenidade e satisfacao.\n");
    printf("3.Estudando, me dedicando e encarando desafios sempre.\n");
    printf("4.Um empresário de sucesso com muito dinheiro.\n");

    scanf("%d",&x);
    if(x==1)
        g+15;
    if(x==4)
        h+15;
    if(x==3)
        r+15;
    if(x==2)
        s+20;

    /*pergunta 8*/
    printf("Sua casa está em chamas. Qual a única coisa que voce salva?\n\n");
    printf("1.Seu instrumento musical.\n");
    printf("2.Seu animal de estimacao.\n");
    printf("3.Seu livro favorito.\n");

  
}    
