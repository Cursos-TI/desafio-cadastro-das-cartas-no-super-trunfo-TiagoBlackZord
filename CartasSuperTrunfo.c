#include<stdio.h>
#include <string.h>
int main(){

	char estado1, estado2, codigoCarta1[4], codigoCarta2[4], nomeCidade1[25], nomeCidade2[25], escolhaDoUsuarioEscrita[30];
	int pontosTuristicos1, pontosTuristicos2, populacao1, populacao2, escolhaDoUsuario;
	float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, PibPerCapita1, PibPerCapita2;

	//Recebendo valores do usuário para a carta 1
	printf("\n\n*** Carta 1 ***\n");
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

	//Criando menu interativo
	printf("\n\nAgora, você deve escolher uum atributo para comparar as cartas!\nVocê pode escolher entre:\n\n");
	printf("1. População\n2. Área\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Demográfica\n\n Digite um número de opção: ");
	scanf("%d", &escolhaDoUsuario);

	//Pegando a escolha escrita do usuário
	if(escolhaDoUsuario == 1){
		strcpy(escolhaDoUsuarioEscrita, "População");
	} else if(escolhaDoUsuario == 2){
		strcpy(escolhaDoUsuarioEscrita, "Área");
	} else if(escolhaDoUsuario == 3){
		strcpy(escolhaDoUsuarioEscrita, "PIB");
	} else if(escolhaDoUsuario == 4){
		strcpy(escolhaDoUsuarioEscrita, "Número de Pontos Turísticos");
	} else if(escolhaDoUsuario == 5){
		strcpy(escolhaDoUsuarioEscrita, "Densidade Demográfica");
	}
	
	//
	if(escolhaDoUsuario > 5 || escolhaDoUsuario < 1){
		printf("\n\nVocê escolheu uma opção que não existe!\nExecute o programa novamente.\n\n");
	}else{
		switch (escolhaDoUsuario)
		{
		case 1:
			if(populacao1 > populacao2){
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %d     Carta 2: %d\n", populacao1, populacao2);
				printf("*** Carta 1 venceu! ***\n\n");
			}else{
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %d     Carta 2: %d\n", populacao1, populacao2);
				printf("*** Carta 2 venceu! ***\n\n");
			}
			break;
		case 2:
			if(area1 > area2){
				printf("\n\nResultado:\n");
				printf("%s      %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %f     Carta 2: %f\n", area1, area2);
				printf("*** Carta 1 venceu! ***\n\n");
			}else{
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %f     Carta 2: %f\n", area1, area2);
				printf("*** Carta 2 venceu! ***\n\n");
			}
			break;
		case 3:
			if(pib1 > pib2){
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %f     Carta 2: %f\n", pib1, pib2);
				printf("*** Carta 1 venceu! ***\n\n");
			}else{
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %f     Carta 2: %f\n", pib1, pib2);
				printf("*** Carta 2 venceu! ***\n\n");
			}
			break;
		case 4:
			if(pontosTuristicos1 > pontosTuristicos2){
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %d     Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
				printf("*** Carta 1 venceu! ***\n\n");
			}else{
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %d     Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
				printf("*** Carta 2 venceu! ***\n\n");
			}
			break;
		case 5:
			if(densidadePopulacional1 < densidadePopulacional2){
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %f     Carta 2: %f\n", densidadePopulacional1, densidadePopulacional2);
				printf("*** Carta 1 venceu! ***\n\n");
			}else{
				printf("\n\nResultado:\n");
				printf("%s     %s\n", nomeCidade1, nomeCidade2);
				printf("Atributo escolhido: %s\n", escolhaDoUsuarioEscrita);
				printf("Carta 1: %f     Carta 2: %f\n", densidadePopulacional1, densidadePopulacional2);
				printf("*** Carta 2 venceu! ***\n\n");
			}
			break;

		
		default:
			printf("Empate!");
			break;
		}
	}

	


    return 0;

}