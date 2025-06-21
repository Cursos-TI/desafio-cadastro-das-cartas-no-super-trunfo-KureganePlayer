#include <stdio.h>

int main() { 
    
    printf("Olá jogador ( <> -- <> ) \n");
    printf("\n");
    printf("Seja Bem vindo ao jogo !!!\n");
    printf("\n");
    printf("Super Trunfo\n");
    printf("\n");
    printf("Neste jogo você irá escolher entre duas cartas, cada uma representando uma cidade do Brasil.\n");
    printf("Cada carta possui informações sobre a cidade, como população, área, PIB e pontos turísticos.\n");
    printf("O objetivo é comparar as cartas e ver qual cidade tem a melhor estatística em cada categoria.\n");
    printf("\n");
    printf("Vamos começar!\n");
    printf("\n");
    
    int carta_1;
    int carta_2;
    
    
    char Estado_1[20];
    char Estado_2[20];
   

    char Codigo_carta_1[50];
    char Codigo_carta_2[50];
   

    char Nome_da_Cidade_1[50];
    char Nome_da_Cidade_2[50];
   

    int Populacao_1; // ex: população de São Paulo
    int Populacao_2; // ex: população do Rio de Janeiro
   

    float Area_1; // ex: área de São Paulo em km²
    float Area_2; // ex: área do Rio de Janeiro em km²
   

    float pib_1; //  ex: pib são paulo
    float pib_2; //  ex: pib rio de janeiro

   

    int Numeros_de_pontos_turisticos_1; // número de pontos turísticos em São Paulo
    int Numeros_de_pontos_turisticos_2; // número de pontos turísticos no Rio de Janeiro

    printf("Os dados a seguir serão utilizados para criar a 1º Carta:\n");
    printf("\n");
    printf("Defina um codigo para a carta 'ex A01' (obs: Não repetir codigo para outras cartas): ");
    scanf("%s", Codigo_carta_1);
    
    printf("Digite um nome para a cidade: ");
    scanf("%s", Nome_da_Cidade_1);
    
    printf("Digite o estado de 'A' a 'H': ");
    scanf("%s", Estado_1);
    
    printf("Digite a população dessa cidade (ex: 123456): ");
    scanf("%d", &Populacao_1);
    
    printf("Digite a área da cidade (em km² ex: 15843.2): ");
    scanf("%f", &Area_1);
    
    printf("Digite o PIB da cidade (ex 2.58 em bilhões): ");
    scanf("%f", &pib_1);
    
    printf("Digite numero de pontos turisticos da cidade (ex 29): ");
    scanf("%d", &Numeros_de_pontos_turisticos_1);
    printf("\n");
    printf("Certo, agora vamos criar a 2º Carta!\n");
    printf("\n");

    printf("Os dados a seguir serão utilizados para criar a 2º Carta:\n");
    printf("\n");

    printf("Defina um codigo para a carta 'ex B03' (obs: Não repetir codigo para outras cartas): ");
    scanf("%s", Codigo_carta_2);

    printf("Digite um nome para a cidade: ");
    scanf("%s", Nome_da_Cidade_2);

    printf("Digite o estado de 'A' a 'H': ");
    scanf("%s", Estado_2);
    
    printf("Digite a população dessa cidade (ex: 123456): ");
    scanf("%d", &Populacao_2);
    
    printf("Digite a área da cidade (em km² ex: 15843.2): ");
    scanf("%f", &Area_2);
    
    printf("Digite o PIB da cidade ('ex 2.58 bilhões'): ");
    scanf("%f", &pib_2);
    
    printf("Digite numero de pontos turisticos da cidade ('ex 29'): ");
    scanf("%d", &Numeros_de_pontos_turisticos_2);
    
    printf("Voce criou as cartas com sucesso!\n");
    
    printf("\n");
    
    printf("As cartas foram criadas com sucesso!\n");
    printf("\n");
    
    printf("Agora vamos comparar as cartas!\n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Código: %s\n", Codigo_carta_1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade_1);
    printf("Estado: %s\n", Estado_1);
    printf("População: %d\n", Populacao_1);
    printf("Área: %.2f km²\n", Area_1);
    printf("PIB em bilhões: %.2f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", Numeros_de_pontos_turisticos_1);
    printf("\n");


    printf("Carta 2:\n");
    printf("Código: %s\n", Codigo_carta_2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade_2);
    printf("Estado: %s\n", Estado_2);
    printf("População: %d\n", Populacao_2);
    printf("Área: %.2f km²\n", Area_2);
    printf("PIB em bilhões: %.2f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", Numeros_de_pontos_turisticos_2);
    printf("\n");
    
    
    printf("\n");
    printf("Obrigado por jogar Super Trunfo!\n");
    printf("Espero que tenha se divertido!\n");


    return 0;
}