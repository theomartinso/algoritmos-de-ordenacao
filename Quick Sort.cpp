#include <stdio.h>
#include <stdlib.h>

int particiona(int vet[] , int inicio , int fim){
	int pivo = vet[(inicio + fim) / 2];
	int troca;
	while (inicio <= fim){
		while(vet[inicio]<pivo)
			inicio = inicio + 1;
		while (vet[fim]>pivo)
			fim = fim - 1;
		if(inicio <= fim){
		troca = vet[inicio];
		vet[inicio] = vet[fim];
		vet[fim] = troca;
		inicio = inicio + 1;
		fim = fim - 1;
	}
	
}
	return inicio;
}

void quickSort(int vet[] , int inicio , int fim){
	if(inicio < fim){
		int pos = particiona(vet , inicio , fim);
		quickSort(vet , inicio , pos - 1);
		quickSort(vet , pos , fim);
	}
}

void imprime(int vetor[] , int tamanho){
	int i;
	for (i=0 ; i < tamanho ; i++){
		printf("%d " , vetor[i]);
	}
}

int main() {
    int vet[5];

    for (int i = 0; i < 5; i++) {
        printf("Escreva o %d numero: ", i + 1);
        scanf("%d", &vet[i]);
    }
    quickSort(vet, 0, 4);

    printf("Vetor Ordenado: ");
    imprime(vet, 5);

    return 0;
}




