#include <stdio.h>
#include <stdlib.h>


int main(){
	int vet[5] , i , j , temp;
	
	for (i=0;i<5;i++){
		printf("Escreva o %d numero: " , i+1);
		scanf("%d" , &vet[i]);
	}
	
	for (i=0 ; i<4 ; i++){
		for (j = 0 ; j < 4-i; j++){
			if(vet[j] > vet[j+1]){
				temp = vet[j];	
				vet[j] = vet[j+1];
				vet[j+1] = temp;
			}
		}
		
	}
	
	printf("Lista ordenada	:");
		for (i=0 ; i<5 ; i++) {
		printf("%d ", vet[i]);
	}
	
	return 0;
}
		
