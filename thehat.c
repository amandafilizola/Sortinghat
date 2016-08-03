/*
Autora: Amanda de Paiva Filizola
The Sorting Hat
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x,g=0,s=0,r=0,h=0;
    printf("Voce esta comecando o questionario para determinar sua Casa. Responda o mais honestamente possivel, pois do contrario, recebera uma Casa na qual nao se encaixa.\nDigite o numero da resposta escolhida e pressione <enter>.");
    
    /*comeco do questionario*/
    /*pergunta 1 */
    printf("Qual as caracteristicas que voce mais preza:\n\n");
    printf("1.Coragem e cavalheirismo.\n");
    printf("2.Lealdade e justica.\n");
    printf("3.Inteligencia e criatividade.\n");
    printf("4.Astúcia e determinacao.\n");
    scanf("%d",&x);
    if(x==1)
        g=g+20;
    if(x==2)
        h=h+20;
    if(x==3)
        r=r+20;
    if(x==4)
        s=s+20;

    /*pergunta 2*/
    printf("O que voce mais espera fazer no primeiro dia de aula?\n\n");
    printf("1.Reecontrar minha turma e contar tudo sobre as ferias.\n");
    printf("2.Conhecer gente nova e fazer amizades.\n");
    printf("3.Aproveitar tudo que a escola oferece e estudar bastante.\n");
    printf("4.Exibir o material novo e minhas roupas novas para meus amigos(as).\n");
    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+10;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;

    /*pergunta 3*/
    printf("É fácil começar uma amizade com voce?\n\n");
    printf("1.Sim, mas acho que precisamos conversar bastante primeiro.\n");
    printf("2.Com certeza!Estou sempre pronto para novas amizades.\n");
    printf("3.Talvez. A pessoa so precisa ter as qualidades certas e nao ser apenas perda do meu tempo.\n");
    printf("4.Talvez. Um bom jeito de comecar e me pedir ajuda com atividades que sou bom.\n");
    scanf("%d",&x);
    if(x==1)
        g=g+5;
    if(x==2)
        h=h+10;
    if(x==4)
        r=r+10;
    if(x==3)
        s=s+10;

    /*pergunta 4*/
    printf("Voce tem inimizades na sua escola ou trabalho?\n\n");
    printf("1.Sim. Nao me orgulho disto porem sempre rola uma rixa com outras turmas.\n");
    printf("2.Detesto brigas e evito conflitos!Tem gente que me acha bobo por isso, porem nao ligo.\n");
    printf("3.Evito conflitos. Sou muito 'na minha'.\n");
    printf("4.Nao.O que vem de baixo nao pode me atingir.\n");
  
    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+20;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;
    
    /*pergunta 5*/
    printf("Um aluno novo e timido entrou na sala. Como voce procede para integra-lo a turma?\n\n");
    printf("1.Procuro pontos em comum com ele e me apresento fazendo uma piadinha.\n");
    printf("2.Converso com ele na mesma hora, dou risadas e faço o melhor para deixa-lo a vontade. todo mundo e bem-vindo!\n");
    printf("3.Ofereço ajuda em alguma materia e digo tudo o que sei sobre a escola e seus professores.\n");
    printf("4.Ignoro-o a principio. Se ele valer a pena, me aproximo.\n");

    scanf("%d",&x);
    if(x==1)
        g=g+15;
    if(x==2)
        h=h+20;
    if(x==3)
        r=r+15;
    if(x==4)
        s=s+15;

    /*pergunta 6*/
    printf("Estudar é o que para você?\n\n");
    printf("1.Mais prazeroso quando se está com amigos.\n");
    printf("2.Uma etapa para cumprir antes de tentar voos mais altos.\n");
    printf("3.Um prazer para mim aprender coisas novas.\n");
    printf("4.Algo que pessoas comuns precisam fazer para ganhar a vida.\n");

    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+10;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;

    /*pergunta 7*/
    printf("Como você se vê no futuro?\n\n");
    printf("1.Trabalhando em algo que seja minha paixao, mesmo que exija muito de mim.\n");
    printf("2.em um emprego que me de serenidade e satisfacao.\n");
    printf("3.Estudando, me dedicando e encarando desafios sempre.\n");
    printf("4.Um empresário de sucesso com muito dinheiro.\n");

    scanf("%d",&x);
    if(x==1)
        g=g+15;
    if(x==2)
        h=h+15;
    if(x==3)
        r=r+15;
    if(x==4)
        s=s+20;

    /*pergunta 8*/
    printf("Sua casa está em chamas. Qual a única coisa que voce salva?\n\n");
    printf("1.Seu instrumento musical.\n");
    printf("2.Seu animal de estimacao.\n");
    printf("3.Seu livro favorito.\n");
    printf("4.Uma heranca de familia preciosa de geracoes.\n");
  
    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+10;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;

    /*pergunta 9*/
    printf("Voce ve uma carteira enquanto caminha na rua. Contem dinheiro porem nenhum tipo de idetificacao. Nao tem ninguem a vista.\n\n");
    printf("1.Voce deixa a carteira onde esta. Alguem provavelmente esta procurando por ela.\n");
    printf("2.Pega o dinheiro. Voce nao sabe a quem pertence, entao \"achado nao e roubado\".\n");
    printf("3.Leva ate a policia caso alguem reporte a perda.\n");
    printf("4.Pega carteira e anda pela area perguntando se alguem perdeu a carteira recentemente.\n");

    scanf("%d",&x);
    if(x==4)
        g=g+10;
    if(x==3)
        h=h+10;
    if(x==1)
        r=r+10;
    if(x==2)
        s=s+10;

    /*pergunta 10*/
    printf("Uma crianca acusa voce, na frente de um bocado de pessoas,de roubar o brinquedo dela(o que voce nao fez). Voce é duas vezes o tamanho dela porem ela nao desiste.\n\n");
    printf("1.Explica para a crianca que nao pegou o brinquedo e direciona para alguem que possa ajudar.\n");
    printf("2.Explica para a crianca que voce nao pegou o brinquedo e oferece para ajudar a encontrar a pessoa que pegou.\n");
    printf("3.Explica para a crianca que nao foi voce quem pegou e se recusa a brigar com ela mesmo que ela tente lhe agredir.\n");
    printf("4.Explica a crianca que nao pegou o brinquedo e avisa para deixa-lo em paz.\n");
    
    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+10;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;

    /*pergunta 11*/
    printf("Um amigo seu diz que tem coisas incriveis dentro de um predio abandonado. Quando voce chega la ve uma placa dizendo \"PERIGO:NAO ENTRE\". Porem o predio nao parece perigoso, nao tem ninguem ao redor para ver voces e seuamigo quer ver como e por dentro.\n\n");
    printf("1.Rio na cara do perigo!Tem provavelmente coisas legais la dentro!Vamos ver sobre o que e essa coisa toda!\n");
    printf("2.Obviamente tem coisas perigosas la dentro e nao devemos entrar.\n");
    printf("3.Talvez eu entre para dar uma espiada. Nao pode machucar ne?\n");
    
    scanf("%d",&x);
    if(x==1)
        g=g+20;
    if(x==2)
    {
        h=h+15;
        r=r+15;
    }
    if(x==3)
        s=s+15;

    /*pergunta 12*/
    printf("Um homem grande e forte se aproxima de voce enquanto voce esta almocando e exige que voce de comida a ele. Ele nao parece ser pobre ou estar passando fome.\n\n");
    printf("1.Lhe da logo um soco na cara. Ninguem rouba de voce.\n");
    printf("2.Lhe da metade de sua comida e o convida para sentar e conversar com voce. Talvez voce consiga ficar amigo dele.\n");  
    printf("3.Lhe da a comida e vai embora rapidamente. Depois recorre as autoridades competentes para que ele pague pelo que fez.\n");
    printf("4.Lhe da a comida e o segue para a casa dele depois para se vingar fazendo algo bem desagradavel!\n");
    
    scanf("%d",&x);
    if(x==1)
        g=g+20;
    if(x==2)
        h=h+40;
    if(x==3)
        r=r+20;
    if(x==4)
        s=s+40;
    /*pergunta 13*/
    printf("Voce herdou uma pequena fortuna da sua tia-avo. O que voce faz?\n\n");
    printf("1.Compra algumas coisas logo que recebe. Talvez um carro novo, uma casa propria etc. O resto salva para necessidade.\n");
    printf("2.Doa tudo para doentes, feridos e pobres.\n");
    printf("3.Poe tudo numa conta poupança e gasta por necessidade.\n");
    printf("4.Investe no mercado de ações.\n");
    printf("5.Usa o dinheiro para montar um negocio proprio.\n");
 
    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+10;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;
    if(x==5)
    {
        g=g+10;
        s=s+10;
    }
    /*pergunta 14*/
    printf("A voce foi dado um pequeno quebra-cabeca de plastico que parece bem dificil de resolver.\n\n");
    printf("1.Vou tentar, mas se nao conseguir, nao sera o fim do mundo.\n");
    printf("2.Tento fazer, porem se nao conseguir, dou o quebra-cabeca para outra pessoa tentar e ver se consegue. Talvez possamos rir juntos de nos mesmos.\n");
    printf("3.Vou dedicar um tempo a isso. Tenho certeza que posso resolver eventualmente.\n");
    printf("4.Nao vou desistir ate eu resolve-lo. Depois talvez eu tente resolver com os olhos vendados.\n");
    printf("5.Dedicarei o tempo que precisar para isso. Pensarei em modos criativos de resolver esse problema.\n");
    
    scanf("%d",&x);
    if(x==1)
        g=g+20;
    if(x==2)
        h=h+20;
    if(x==3)
        r=r+20;
    if(x==4)
        s=s+30;
    if(x==5)
        r=r+30;

    /*pergunta 15*/
    printf("Cinco anos atras um garoto roubou seu dinheiro e nunca teve confusao por causa disso. Desde entao, ele se tornou uma pessoa muito melhor. Recentement, ele foi preso por roubo, porem voce pode provar que ele e inocente.\n\n");
    printf("1.Nao digo nada. Essa e a punicao que ele nao teve cinco anos atras.\n");
    printf("2.Eu o salvaria mesmo que ele fosse uma pessoa ma porque eu sei que ele e inocente dessa vez.\n");
    printf("3.Vou salva-lo pois sei que ele e uma pessoa melhor agora.\n");
    printf("4.Eu o salvaria, com a condicao que ele me pagasse o que me deve.\n");                  
    
    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+10;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;

    /*pergunta 16*/
    printf("Como voce passaria por uma porta trancada?\n\n");
    printf("1.Arrobaria a porta.\n");
    printf("2.Bateria à porta.\n");
    printf("3.Arrombaria discretamente a fechadura com um kit de arrombamento.\n");
    printf("4.Procuraria a chave.\n");

    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+10;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;

    /*pergunta 17*/
    printf("Voce se considera uma pessoa que toma riscos?\n");
    printf("1.Com certeza.\n");
    printf("2.Apenas se forem para ajudar alguem.\n");
    printf("3.Apenas se for estrategicamente vantajoso.\n");
    printf("4.Apenas se valer a recompensa.\n");
   
    scanf("%d",&x);
    if(x==1)
        g=g+10;
    if(x==2)
        h=h+10;
    if(x==3)
        r=r+10;
    if(x==4)
        s=s+10;

    /*fim do questionario*/
    /*processamento*/
    if(g > r && g > h && g > s)
    {   
        printf("Voce foi sortido(a) para GRYFFINDOR!\n\n");
        printf("\"You might belong in Gryffindor,\nWhere dwell the brave at heart,\nTheir daring, nerve, and chivalry\nSet Gryffindors apart.\"\n\n");
    }
    else
        if(h > g && h > r && h > s) 
        {
            printf("Voce foi sortido(a) para HUFFLEPUFF!\n\n"); 
            printf("\"You might belong in Hufflepuff,\nWhere they are just and loyal,\nThose patient Hufflepuffs are true,\nAnd unafraid of toil.\"\n\n");
        }
        else
            if(r > g && r > h && r > s)
            {
                printf("Voce foi sortido(a) para RAVENCLAW!\n\n");
                printf("\"On wise old Ravenclaw,\nIf you've a ready mind,\nWhere those of wit and learning,\nWill always find their kind.\"\n\n");
            }    
            else
                if(s > g && s > h && s > r)
                {
                    printf("Voce foi sortido(a) para SLYTHERIN!\n\n");
                    printf("\"Perhaps in Slytherin,\nYou'll make your real friends,\nThose cunning folk use any means,\nTo achieve their ends.\"\n\n");
                }    
    /*começo do hatstall*/
    if(g==h && g > r && g > s)
    {
        printf("Parabens! Voce e um Hatstall! Hatstall e alguem que o chapeu seletor demora muito para colocar em uma casa. Um termo arcaico de Hogwarts para qualquer novo estudante do qual a selecao demore mais que cinco minutos. Esse e um tempo excepcionalmente longo para que o Chapeu Seletor delibere pela pessoa ter a personalidade igualmente compativel com duas Casas, e acontece raramente, talvez uma vez a cada cinquenta anos.\n ");
        
        printf("Qual a Casa de sua preferência?\n");
        printf("1.Gryffindor.\n2.Hufflepuff.\n\n");
        scanf("%d",&x);
        if(x==1)
        {   
            printf("Voce foi sortido(a) para GRYFFINDOR!\n\n");
            printf("\"You might belong in Gryffindor,\nWhere dwell the brave at heart,\nTheir daring, nerve, and chivalry\nSet Gryffindors apart.\"\n\n");
        }
        else
        {
            printf("Voce foi sortido(a) para HUFFLEPUFF!\n\n"); 
            printf("\"You might belong in Hufflepuff,\nWhere they are just and loyal,\nThose patient Hufflepuffs are true,\nAnd unafraid of toil.\"\n\n");
        }
    }    
    if(g==s && g > r && g > h)
    {
        printf("Parabens! Voce e um Hatstall! Hatstall e alguem que o chapeu seletor demora muito para colocar em uma casa. Um termo arcaico de Hogwarts para qualquer novo estudante do qual a selecao demore mais que cinco minutos. Esse e um tempo excepcionalmente longo para que o Chapeu Seletor delibere pela pessoa ter a personalidade igualmente compativel com duas Casas, e acontece raramente, talvez uma vez a cada cinquenta anos.\n ");
     
        printf("Qual a Casa de sua preferência?\n");
        printf("1.Gryffindor.\n2.Slytherin.\n\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("Voce foi sortido(a) para GRYFFINDOR!\n\n");
            printf("\"You might belong in Gryffindor,\nWhere dwell the brave at heart,\nTheir daring, nerve, and chivalry\nSet Gryffindors apart.\"\n\n");
        }    
        else
        {
            printf("Voce foi sortido(a) para SLYTHERIN!\n\n");
            printf("\"Perhaps in Slytherin,\nYou'll make your real friends,\nThose cunning folk use any means,\nTo achieve their ends.\"\n\n");
        }    
    }
    if(g==r && g > h && g > s)
    {
        printf("Parabens! Voce e um Hatstall! Hatstall e alguem que o chapeu seletor demora muito para colocar em uma casa. Um termo arcaico de Hogwarts para qualquer novo estudante do qual a selecao demore mais que cinco minutos. Esse e um tempo excepcionalmente longo para que o Chapeu Seletor delibere pela pessoa ter a personalidade igualmente compativel com duas Casas, e acontece raramente, talvez uma vez a cada cinquenta anos.\n ");
     
        printf("Qual a Casa de sua preferência?\n");
        printf("1.Gryffindor.\n2.Ravenclaw.\n\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("Voce foi sortido(a) para GRYFFINDOR!\n\n");
            printf("\"You might belong in Gryffindor,\nWhere dwell the brave at heart,\nTheir daring, nerve, and chivalry\nSet Gryffindors apart.\"\n\n");
        }    
        else  
        {
            printf("Voce foi sortido(a) para RAVENCLAW!\n\n");
            printf("\"On wise old Ravenclaw,\nIf you've a ready mind,\nWhere those of wit and learning,\nWill always find their kind.\"\n\n");
        }    
    }    
    if(h==r && h > g && h > s)
    {
        printf("Parabens! Voce e um Hatstall! Hatstall e alguem que o chapeu seletor demora muito para colocar em uma casa. Um termo arcaico de Hogwarts para qualquer novo estudante do qual a selecao demore mais que cinco minutos. Esse e um tempo excepcionalmente longo para que o Chapeu Seletor delibere pela pessoa ter a personalidade igualmente compativel com duas Casas, e acontece raramente, talvez uma vez a cada cinquenta anos.\n ");
     
        printf("Qual a Casa de sua preferência?\n");
        printf("1.Hufflepuff.\n2.Ravenclaw.\n\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("Voce foi sortido(a) para HUFFLEPUFF!\n\n"); 
            printf("\"You might belong in Hufflepuff,\nWhere they are just and loyal,\nThose patient Hufflepuffs are true,\nAnd unafraid of toil.\"\n\n");
        }   
        else
        {
            printf("Voce foi sortido(a) para RAVENCLAW!\n\n");
            printf("\"On wise old Ravenclaw,\nIf you've a ready mind,\nWhere those of wit and learning,\nWill always find their kind.\"\n\n");
        }    
    }    
    if(h==s && h > g && h > r)
    {
        printf("Parabens! Voce e um Hatstall! Hatstall e alguem que o chapeu seletor demora muito para colocar em uma casa. Um termo arcaico de Hogwarts para qualquer novo estudante do qual a selecao demore mais que cinco minutos. Esse e um tempo excepcionalmente longo para que o Chapeu Seletor delibere pela pessoa ter a personalidade igualmente compativel com duas Casas, e acontece raramente, talvez uma vez a cada cinquenta anos.\n ");
     
        printf("Qual a Casa de sua preferência?\n");
        printf("1.Hufflepuff.\n2.Slytherin.\n\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("Voce foi sortido(a) para HUFFLEPUFF!\n\n"); 
            printf("\"You might belong in Hufflepuff,\nWhere they are just and loyal,\nThose patient Hufflepuffs are true,\nAnd unafraid of toil.\"\n\n");
        }    
        else
        {
            printf("Voce foi sortido(a) para SLYTHERIN!\n\n");
            printf("\"Perhaps in Slytherin,\nYou'll make your real friends,\nThose cunning folk use any means,\nTo achieve their ends.\"\n\n");
        }    
    }
    if(r==s && r > g && r > h)
    {
        printf("Parabens! Voce e um Hatstall! Hatstall e alguem que o chapeu seletor demora muito para colocar em uma casa. Um termo arcaico de Hogwarts para qualquer novo estudante do qual a selecao demore mais que cinco minutos. Esse e um tempo excepcionalmente longo para que o Chapeu Seletor delibere pela pessoa ter a personalidade igualmente compativel com duas Casas, e acontece raramente, talvez uma vez a cada cinquenta anos.\n ");
     
        printf("Qual a Casa de sua preferência?\n");
        printf("1.Slytherin.\n2.Ravenclaw.\n\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("Voce foi sortido(a) para SLYTHERIN!\n\n");
            printf("\"Perhaps in Slytherin,\nYou'll make your real friends,\nThose cunning folk use any means,\nTo achieve their ends.\"\n\n");
        }
        else
        {
            printf("Voce foi sortido(a) para RAVENCLAW!\n\n");
            printf("\"On wise old Ravenclaw,\nIf you've a ready mind,\nWhere those of wit and learning,\nWill always find their kind.\"\n\n");
        }      
    }             
}
