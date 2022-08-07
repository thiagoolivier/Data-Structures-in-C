#include<stdio.h>
#include<stdlib.h>

//Thiago O. F. de Oliveira

//anotações dos estudos sobre a estrutura de dados registro

//esse código realiza a inserção e leitura dos dados inseridos em um ponteiro do tipo registro

typedef struct{
	char Nome[40];
	int Idade;
	char Rua[40];
	int NumRes;
	int CEP;		
} registro;

void inserirDadosStruct(registro *nomeStruct){
	printf("Insira os dados no registro:");	
		
	printf("\n\n");  //coloquei o newline separado para facilitar a leitura dos exemplos.
	printf("Nome: "); 
	fgets(nomeStruct->Nome, 40, stdin);
	printf("\n");
	
	
	printf("Idade: "); scanf("%d", &nomeStruct->Idade);
	printf("\n");
	
	printf("Rua: ");
	fflush(stdin); 
	fgets(nomeStruct->Rua, 40, stdin);
	printf("\n");
	
	printf("Numero da residencia: "); scanf("%d", &nomeStruct->NumRes);
	printf("\n");
	
	printf("CEP: "); scanf("%d", &nomeStruct->CEP);
}

void mostrarStruct(registro *nomeStruct){
	printf("\n");
	printf("------------------------------");
	printf("\n\n");
	printf("Os dados inseridos foram: ");
	printf("\n\n");
	printf("Nome: %s", nomeStruct->Nome);
	printf("Idade: %d", nomeStruct->Idade);
	printf("\n");
	printf("Rua: %s", nomeStruct->Rua);
	printf("Numero da Residencia: %d", nomeStruct->NumRes);
	printf("\n");
	printf("Idade: %d", nomeStruct->CEP);
	printf("\n");
}

int main() {
	//declaração de um ponteiro do tipo registro, a fim de evitar problemas relacionados a escopo nas funções de inserção e leitura do registro.
	registro *PtrExemploPessoa, ExemploPessoa;
	PtrExemploPessoa = &ExemploPessoa;
	
	inserirDadosStruct(PtrExemploPessoa);
	mostrarStruct(PtrExemploPessoa);	
	
	return 0;
}
