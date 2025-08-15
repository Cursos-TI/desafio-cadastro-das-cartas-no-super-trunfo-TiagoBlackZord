#include<stdio.h>
int main(){

	char estado1, estado2, codigoCarta1[4], codigoCarta2[4], nomeCidade1[25], nomeCidade2[25];
	int pontosTuristicos1, pontosTuristicos2, populacao1, populacao2;
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

	//Calculando a Densidade Populacional e o PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    PibPerCapita1 = pib1 / populacao1;
    PibPerCapita2 = pib2 / populacao2;

	//Exibindo ao usuário Densidade Populacional e PIB per capita
	printf("\n\nDensidade Populacional %s: %.2f\n", nomeCidade1 ,densidadePopulacional1);
	printf("Densidade Populacional %s: %.2f\n", nomeCidade2 ,densidadePopulacional2);
	printf("PIB per Capita %s: %.2f\n", nomeCidade1, PibPerCapita1);
	printf("PIB per Capita %s: %.2f\n", nomeCidade2 ,PibPerCapita2);


	printf("\n\nComparação de cartas (Atributo: População):");
	if(populacao1 > populacao2){
		printf("\nCarta 1 - %s: %d", nomeCidade1, populacao1);
		printf("\nCarta 2 - %s: %d", nomeCidade2, populacao2);
		printf("\nResultado: Carta 1 (%s) venceu", nomeCidade1);
	}else{
		printf("\nCarta 1 - %s: %d", nomeCidade1, populacao1);
		printf("\nCarta 2 - %s: %d", nomeCidade2, populacao2);
		printf("\nResultado: Carta 2 (%s) venceu", nomeCidade2);
	}
	printf("\n\n\n");
    return 0;

}