#include <stdio.h> // Biblioteca padrão de entrada e saída

int main() { // Início do programa

    char nome1[15];          //Valor das variáveis de caractéres
    char regras[500]="Regras basicas do Super Trunfo:\n 1. Cada jogador tem uma carta com: Codigo, estado, nome da cidade, populacao, area, PIB, numero de pontos turisticos, densidade poupulacional e PIB per capita.\n 2. O jogo comeca com um jogador escolhendo uma categoria.\n 3. O outro jogador deve escolher a mesma categoria.\n 4. O jogador com o maior valor na categoria ganha a rodada.\n 5. O jogo continua ate que um jogador fique sem cartas.\n 6. O jogador que ficar com todas as cartas vence o jogo.";
printf("\n================\n");                  //'printf' Usado para imprimir um código sem precisar de uma resposta
    printf("==Bem-vindo ao Super Trunfo==");
    printf("\n===============\n");
printf("Para comecar, digite seu nome: ");
    scanf(" %[^\n]",nome1);                       //'scanf' Usado para solicitar uma resposta do usuário   //'%[^\n]' Usado para que o usuário possa digitar um texto com espaços
    printf("\n***********\n");
printf("Vamos nessa, %s! Seu adversario sou eu, Enzo. Voce sera o 'Jogador 1' e eu serei o 'Jogador 2'.",nome1);
    printf("\n***********\n");
printf("%s\n", regras);

    char confirmacao[5];
    
printf("Digite 'ok' para prosseguir: ");
scanf("%s", confirmacao);
    printf("\n================\n");


printf("CARTA 1 \n Codigo: A1 \n Estado: SP \n Nome da Cidade: Sao Paulo \n Populacao: 12.252.023 \n Area: 1.521 km2 \n PIB: R$ 699.33 bilhoes \n Numero de Pontos Turisticos: 29 \n PIB per Capita \n Densidade populacional \n SUPER PODER\n");

    char codigo1[4]="A1";                 //'int' armazena um valor de número inteiro
    char estado1[4]="SP";                 //'char' armazena um caractere ou string
    char cidade1[10]="Sao Paulo";          //'float' armazena um número com vírgula
    float populacao1= 12252023;                  // População da cidade 1
    float area1= 1521.0;                       // Área da cidade 1
    float pib1= 699.33;                        // PIB da cidade 1
    unsigned int pontos1= 29;                           // Pontos turísticos da cidade 1
    float densidade1= populacao1/area1;      // Densidade populacional da cidade 1
    float pibpercapita1= populacao1/pib1;    // PIB per capita da cidade 1
    double superpoder1= populacao1 + area1 + pib1 + pontos1 + 1/densidade1 + pibpercapita1;    // Superpoder da cidade 1

printf("CARTA 2 \n Codigo: B1 \n Estado: RJ \n Nome da Cidade: Rio de Janeiro \n Populacao: 6.718.903 \n Area: 1.255 km2 \n PIB: R$ 365.32 bilhoes \n Numero de Pontos Turisticos: 60\n PIB per Capita\n Densidade populacional\n SUPER PODER\n");

    char codigo2[4]="B1";
    char estado2[4]="RJ";
    char cidade2[15]="Rio de Janeiro";
    float populacao2= 6718903;
    float area2= 1255.0;
    float pib2= 365.32;
    unsigned int pontos2= 60;
    float densidade2= populacao2/area2;
    float pibpercapita2= populacao2/pib2;
    double superpoder2= populacao2 + area2 + pib2 + pontos2 + 1/densidade2 + pibpercapita2;

printf("Essas sao as cartas, vamos jogar!!!\n");
    
printf("\n===PREPARACAO, CADA JOGADOR ESCOLHE UMA CARTA===\n");

    //Então começa a primeira rodada, cada jogador escolheu uma carta.

printf("Jogador 1, escolheu a carta 1:\n");

    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %.2f\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f", superpoder1);
        printf("\n================\n");

printf("Jogador 2, escolheu a carta 2:\n");

    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %.2f\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

        printf("\n================\n");
        printf("Tudo certo? Digite 'ok': ");
        scanf("%s", confirmacao);
        printf("\n================\n");

    int atributo;
printf("Escolha o numero do atributo para comparar:\n 1. Populacao\n 2. Area\n 3. PIB\n 4. Numero de Pontos Turisticos\n 5. Densidade populacional\n 6. PIB per Capita\n 7. Super Poder\n");
     scanf("%d", &atributo);

switch (atributo) {
        case 1: // População
            printf("Digite a populacao do Jogador 1: ");
            scanf("%f", &populacao1);
            printf("Digite a populacao do Jogador 2: ");
            scanf("%f", &populacao2);

            if (populacao1 > populacao2) printf("Jogador 1 ganhou!\n");
            else if (populacao1 < populacao2) printf("Jogador 2 ganhou!\n");
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Digite a area do Jogador 1: ");
            scanf("%f", &area1);
            printf("Digite a area do Jogador 2: ");
            scanf("%f", &area2);

            if (area1 > area2) printf("Jogador 1 ganhou!\n");
            else if (area1 < area2) printf("Jogador 2 ganhou!\n");
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Digite o PIB do Jogador 1: ");
            scanf("%f", &pib1);
            printf("Digite o PIB do Jogador 2: ");
            scanf("%f", &pib2);

            if (pib1 > pib2) printf("Jogador 1 ganhou!\n");
            else if (pib1 < pib2) printf("Jogador 2 ganhou!\n");
            else printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Digite o numero de pontos turisticos do Jogador 1: ");
            scanf("%d", &pontos1);
            printf("Digite o numero de pontos turisticos do Jogador 2: ");
            scanf("%d", &pontos2);

            if (pontos1 > pontos2) printf("Jogador 1 ganhou!\n");
            else if (pontos1 < pontos2) printf("Jogador 2 ganhou!\n");
            else printf("Empate!\n");
            break;

        case 5: // Densidade populacional (quanto menor, melhor)
            printf("Digite a densidade populacional do Jogador 1: ");
            scanf("%f", &densidade1);
            printf("Digite a densidade populacional do Jogador 2: ");
            scanf("%f", &densidade2);

            if (densidade1 < densidade2) printf("Jogador 1 ganhou!\n");
            else if (densidade1 > densidade2) printf("Jogador 2 ganhou!\n");
            else printf("Empate!\n");
            break;

        case 6: // PIB per Capita
            printf("Digite o PIB per capita do Jogador 1: ");
            scanf("%f", &pibpercapita1);
            printf("Digite o PIB per capita do Jogador 2: ");
            scanf("%f", &pibpercapita2);

            if (pibpercapita1 > pibpercapita2) printf("Jogador 1 ganhou!\n");
            else if (pibpercapita1 < pibpercapita2) printf("Jogador 2 ganhou!\n");
            else printf("Empate!\n");
            break;

        case 7: // Super poder
            printf("Digite o super poder do Jogador 1: ");
            scanf("%lf", &superpoder1);
            printf("Digite o super poder do Jogador 2: ");
            scanf("%lf", &superpoder2);

            if (superpoder1 > superpoder2) printf("Jogador 1 ganhou!\n");
            else if (superpoder1 < superpoder2) printf("Jogador 2 ganhou!\n");
            else printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }





return 0; // Fim do programa com zero erros
}