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
    if(x==4)
        r+10;
    if(x==3)
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
    if(x==2)
        h+20;
    if(x==3)
        r+15;
    if(x==4)
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
    if(x==2)
        h+10;
    if(x==3)
        r+10;
    if(x==4)
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
    if(x==2)
        h+15;
    if(x==3)
        r+15;
    if(x==4)
        s+20;

    /*pergunta 8*/
    printf("Sua casa está em chamas. Qual a única coisa que voce salva?\n\n");
    printf("1.Seu instrumento musical.\n");
    printf("2.Seu animal de estimacao.\n");
    printf("3.Seu livro favorito.\n");
    printf("4.Uma heranca de familia preciosa de geracoes.\n");
  
    scanf("%d",&x);
    if(x==1)
        g+10;
    if(x==2)
        h+10;
    if(x==3)
        r+10;
    if(x==4)
        s+10;

    /*pergunta 9*/
    printf("Voce ve uma carteira enquanto caminha na rua. Contem dinheiro porem nenhum tipo de idetificacao. Nao tem ninguem a vista.\n\n");
    printf("1.Voce deixa a carteira onde esta. Alguem provavelmente esta procurando por ela.\n");
    printf("2.Pega o dinheiro. Voce nao sabe a quem pertence, entao \"achado nao e roubado\".\n ");
    printf("3.Leva ate a policia caso alguem reporte a perda.\n");
    printf("4.Pega carteira e anda pela area perguntando se alguem perdeu a carteira recentemente.\n");

    scanf("%d",&x);
    if(x==4)
        g+10;
    if(x==3)
        h+10;
    if(x==1)
        r+10;
    if(x==2)
        s+10;

    /*pergunta 10*/
    printf("Uma crianca acusa voce, na frente de um bocado de pessoas,de roubar o brinquedo dela(o que voce nao fez). Voce é duas vezes o tamanho dela porem ela nao desiste.\n\n");
    printf("1.Explica para a crianca que nao pegou o brinquedo e direciona para alguem que possa ajudar.\n");
    printf("2.Explica para a crianca que voce nao pegou o brinquedo e oferece para ajudar a encontrar a pessoa que pegou.\n");
    printf("3.Explica para a crianca que nao foi voce quem pegou e se recusa a brigar com ela mesmo que ela tente lhe agredir.\n");
    printf("4.Explica a crianca que nao pegou o brinquedo e avisa para deixa-lo em paz.\n");
    
    scanf("%d",&x);
    if(x==1)
        g+10;
    if(x==2)
        h+10;
    if(x==3)
        r+10;
    if(x==4)
        s+10;

    /*pergunta 11*/
    printf("Um amigo seu diz que tem coisas incriveis dentro de um predio abandonado. Quando voce chega la ve uma placa dizendo \"PERIGO:NAO ENTRE\". Porem o predio nao parece perigoso, nao tem ninguem ao redor para ver voces e seuamigo quer ver como e por dentro.\n\n");
    printf("1.Rio na cara do perigo!Tem provavelmente coisas legais la dentro!Vamos ver sobre o que e essa coisa toda!");
    printf("2.Obviamente tem coisas perigosas la dentro e nao devemos entrar.\n");
    printf("3.Talvez eu entre para dar uma espiada. Nao pode machucar ne?\n");
    
    scanf("%d",&x);
    if(x==1)
        g+20;
    if(x==2)
        h+15 && r+15;
    if(x==3)
        s+15;

    /*pergunta 12*/
    printf("Um homem grande e forte se aproxima de voce enquanto voce esta almocando e exige que voce de comida a ele. Ele nao parece ser pobre ou estar passando fome.\n\n");
    printf("1.Lhe da logo um soco na cara. Ninguem rouba de voce.\n");
    printf("2.Lhe da metade de sua comida e o convida para sentar e conversar com voce. Talvez voce consiga ficar amigo dele.\n");  
    printf("3.Lhe da a comida e vai embora rapidamente. Depois recorre as autoridades competentes para que ele pague pelo que fez.\n");

}    
