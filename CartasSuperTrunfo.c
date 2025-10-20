#include <stdio.h>

int main(){
  printf("Desafio Super Trunfo");

	// Carta 1
		char estado1;
		char codigo1[10];
		char cidade1[50];
		int populacao1;
		float area1;
		float pib1;
		int pontos1;
			printf("\n");
			printf("Cadastro da primeira Carta, Super Trunfo - Cidades Brasileiras\n");
			printf("---------------------------------------------------\n");
			printf("\n");

				printf("Qual letra irá representar o estado onde fica a cidade? ");
					scanf(" %c", &estado1);
				printf("\n");

				printf("Qual o código da cidade?(ex: A01, A02, B01, B02, etc) ");
					scanf(" %s", codigo1);
				printf("\n"); 

				printf("Qual o nome da cidade?(utilize underline para separar palavras e não use caracteres especiais) ");
					scanf(" %s", cidade1);
				printf("\n");

				printf("Qual a população da cidade? ");
					scanf(" %d", &populacao1);
				printf("\n");

				printf("Qual a área da cidade em km²? ");
					scanf(" %f", &area1);
				printf("\n");

				printf("Qual o PIB da cidade em bilhões? ");
					scanf(" %f", &pib1);
				 printf("\n");

				printf("Quantos pontos turisticos tem essa cidade? ");
					scanf(" %d", &pontos1);
			printf("\n");
			printf("---------------------------------------------------\n");
			printf("\n");


	// Carta 2
		char estado2;
		char codigo2[10];
		char cidade2[50];
		int populacao2;
		float area2;
		float pib2;
		int pontos2;

			printf("Cadastro da segunda Carta, Super Trunfo - Cidades Brasileiras\n");
			printf("\n");
			printf("---------------------------------------------------\n");
				printf("Qual letra irá representar o estado onde fica a cidade que você deseja cadastrar? ");
					scanf(" %c", &estado2);
				printf("\n");

				printf("Qual o código da cidade?(ex: A01, A02, B01, B02, etc) ");
					scanf(" %s", codigo2);
				printf("\n");

				printf("Qual o nome da cidade?(utilize underline para separar palavras e não use caracteres especiais) ");
					scanf(" %s", cidade2);
				printf("\n");

				printf("Qual a população da cidade? ");
					scanf(" %d", &populacao2);
				printf("\n");

				printf("Qual a área da cidade em km²? ");
					scanf(" %f", &area2);
				printf("\n");

				printf("Qual o PIB da cidade em bilhões? ");
					scanf(" %f", &pib2);
				printf("\n");

				printf("Quantos pontos turisticos tem essa cidade? ");
					scanf(" %d", &pontos2);
		printf("\n");
		printf("---------------------------------------------------\n");
		printf("\n");


	// Exibição dos dados cadastrados
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Cidade: %s\n", cidade1);
	printf("População: %d\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turisticos: %d\n", pontos1);

	printf("\n");

	printf("Carta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Cidade: %s\n", cidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões\n", pib2);
	printf("Número de Pontos Turisticos: %d\n", pontos2);

	return 0;
}