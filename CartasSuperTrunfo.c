#include<stdio.h>
int main(){

	char estado1, estado2, codigoCarta1[4], codigoCarta2[4], nomeCidade1[25], nomeCidade2[25];
	int pontosTuristicos1, pontosTuristicos2, resultadoMaior, carta1, carta2, indice;
	float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, PibPerCapita1, PibPerCapita2, SuperPoder1, SuperPoder2;
	unsigned long int populacao1, populacao2;
	const char* mensagens[3] = {"São iguais","Carta 1 venceu","Carta 2 venceu"}; // Array de mensagens


	//Recebendo valores do usuário para a carta 1
	printf("\n\nCarta 1\n");
	printf("\nInforme a primeira letra do Estado: ");
	scanf("%c", &estado1);
	printf("\nInforme o código da carta. Ex: 01, 02, 03 ou 04: ");
	scanf("%s", codigoCarta1);
	printf("\nInforme o nome cidade: ");
	scanf(" %[^\n]", nomeCidade1);
	printf("\nInforme quantidade total da população no Estado: ");
	scanf("%lu", &populacao1);
	printf("\nInforme a área total do Estado: ");
	scanf("%f", &area1);
	printf("\nInforme o PIB do Estado: ");
	scanf("%f", &pib1);
	printf("\nInforme a quantidade de pontos turisticos do Estado: ");
	scanf(" %d", &pontosTuristicos1);

	//Recebendo valores do usuário para a carta 2
	printf("\n\nCarta 2\n");
	printf("\nInforme a primeira letra do Estado: ");
	scanf(" %c", &estado2);
	printf("\nInforme o código da carta. Ex: 01, 02, 03 ou 04: ");
	scanf("%s", codigoCarta2);
	printf("\nInforme o nome cidade: ");
	scanf(" %[^\n]", nomeCidade2);
	printf("\nInforme quantidade total da população no Estado: ");
	scanf("%lu", &populacao2);
	printf("\nInforme a área total do Estado: ");
	scanf("%f", &area2);
	printf("\nInforme o PIB do Estado: ");
	scanf("%f", &pib2);
	printf("\nInforme a quantidade de pontos turisticos do Estado: ");
	scanf("%d", &pontosTuristicos2);

	//Calculando a Densidade Populacional, PIB per capita e os Super Poderes
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    PibPerCapita1 = pib1 / populacao1;
    PibPerCapita2 = pib2 / populacao2;

	SuperPoder1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + PibPerCapita1)-densidadePopulacional1;
	SuperPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + PibPerCapita2)-densidadePopulacional2;


	printf("\n\nComparação de Cartas:");
	//Calculando quem é maior
	carta1 = populacao1 > populacao2;
	carta2 = populacao2 > populacao1;
    // Índice da mensagem: 0 se iguais, 1 se carta 1 for maior, 2 se carta 2 for maior
    indice = carta1 * 1 + carta2 * 2;
	//Mostrando Resultado
    printf("\nPopulação: %s\n", mensagens[indice]);

	//Calculando quem é maior
	carta1 = area1 > area2;
	carta2 = area2 > area1;
    // Índice da mensagem: 0 se iguais, 1 se carta 1 for maior, 2 se carta 2 for maior
    indice = carta1 * 1 + carta2 * 2;
	//Mostrando Resultado
    printf("Área: %s\n", mensagens[indice]);
	
	//Calculando quem é maior
	carta1 = pib1 > pib2;
	carta2 = pib2 > pib1;
    // Índice da mensagem: 0 se iguais, 1 se carta 1 for maior, 2 se carta 2 for maior
    indice = carta1 * 1 + carta2 * 2;
	//Mostrando Resultado
    printf("PIB: %s\n", mensagens[indice]);
	
	//Calculando quem é maior
	carta1 = pontosTuristicos1 > pontosTuristicos2;
	carta2 = pontosTuristicos2 > pontosTuristicos1;
    // Índice da mensagem: 0 se iguais, 1 se carta 1 for maior, 2 se carta 2 for maior
    indice = carta1 * 1 + carta2 * 2;
	//Mostrando Resultado
    printf("Pontos Turisticos: %s\n", mensagens[indice]);
	
	//Calculando quem é maior
	carta1 = densidadePopulacional1 < densidadePopulacional2;
	carta2 = densidadePopulacional2 < densidadePopulacional1;
    // Índice da mensagem: 0 se iguais, 1 se carta 1 for maior, 2 se carta 2 for maior
    indice = carta1 * 1 + carta2 * 2;
	//Mostrando Resultado
    printf("Densidade Populacional: %s\n", mensagens[indice]);
	
	//Calculando quem é maior
	carta1 = PibPerCapita1 > PibPerCapita2;
	carta2 = PibPerCapita2 > PibPerCapita1;
    // Índice da mensagem: 0 se iguais, 1 se carta 1 for maior, 2 se carta 2 for maior
    indice = carta1 * 1 + carta2 * 2;
	//Mostrando Resultado
    printf("PIB per capita: %s\n", mensagens[indice]);

	//Calculando quem é maior
	carta1 = SuperPoder1 > SuperPoder2;
	carta2 = SuperPoder2 > SuperPoder1;
    // Índice da mensagem: 0 se iguais, 1 se carta 1 for maior, 2 se carta 2 for maior
    indice = carta1 * 1 + carta2 * 2;
	//Mostrando Resultado
    printf("Super Poder: %s\n\n", mensagens[indice]);
	
/*
	//Monstrando a carta 1
	printf("\n\nCarta 1:");
	printf("\nEstado: %c", estado1);
	printf("\nCódigo: %s", codigoCarta1);
	printf("\nNome da Cidade: %s", nomeCidade1);
	printf("\nPopulação: %lu", populacao1);
	printf("\nÁrea: %.2f", area1);
	printf("\nPIB: %.2f", pib1);
	printf("\nNúmeros de Pontos Turísticos: %d",pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f", densidadePopulacional1);
    printf("\nPIB Per Capita: %.2f", PibPerCapita1);

	printf("\n\n");

	//Monstrando a carta 2
	printf("\nCarta 2:");
	printf("\nEstado: %c", estado2);
	printf("\nCódigo: %s", codigoCarta2);
	printf("\nNome da Cidade: %s", nomeCidade2);
	printf("\nPopulação: %lu", populacao2);
	printf("\nÁrea: %.2f", area2);
	printf("\nPIB: %.2f", pib2);
	printf("\nNúmeros de Pontos Turísticos: %d",pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f", densidadePopulacional2);
    printf("\nPIB Per Capita: %.2f", PibPerCapita2);
    printf("\n\n");
*/
    return 0;

}