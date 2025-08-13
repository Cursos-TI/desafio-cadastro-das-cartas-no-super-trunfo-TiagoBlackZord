#include<stdio.h>
int main(){

	char estado1, estado2, codigoCarta1[4], codigoCarta2[4], nomeCidade1[25], nomeCidade2[25];
	int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
	float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, PibPerCapita1, PibPerCapita2;


	//Recebendo valores do usuário para a carta 1
	printf("\n\nCarta 1\n");
	printf("\nInforme a primeira letra do Estado: ");
	scanf("%c", &estado1);
	printf("\nInforme o código da carta. Ex: 01, 02, 03 ou 04: ");
	scanf("%s", codigoCarta1);
	printf("\nInforme o nome cidade: ");
	scanf(" %[^\n]", nomeCidade1);
	printf("\nInforme quantidade total da população no Estado: ");
	scanf("%d", &populacao1);
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
	scanf("%d", &populacao2);
	printf("\nInforme a área total do Estado: ");
	scanf("%f", &area2);
	printf("\nInforme o PIB do Estado: ");
	scanf("%f", &pib2);
	printf("\nInforme a quantidade de pontos turisticos do Estado: ");
	scanf("%d", &pontosTuristicos2);

    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    PibPerCapita1 = (float) pib1 / populacao1;
    PibPerCapita2 = (float) pib2 / populacao2;

	//Monstrando a carta 1
	printf("\n\nCarta 1:");
	printf("\nEstado: %c", estado1);
	printf("\nCódigo: %s", codigoCarta1);
	printf("\nNome da Cidade: %s", nomeCidade1);
	printf("\nPopulação: %d", populacao1);
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
	printf("\nPopulação: %d", populacao2);
	printf("\nÁrea: %.2f", area2);
	printf("\nPIB: %.2f", pib2);
	printf("\nNúmeros de Pontos Turísticos: %d",pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f", densidadePopulacional2);
    printf("\nPIB Per Capita: %.2f", PibPerCapita2);
    printf("\n\n");

    return 0;

}