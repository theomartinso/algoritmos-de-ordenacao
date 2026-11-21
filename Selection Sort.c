#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int vet[5] , i , j , temp;
	
	for(i=0 ; i<5 ; i++){
		printf("Escreva o %d numero :" , i+1);
		scanf("%d" , &vet[i]);
	}
	
	for(i=0 ; i<5 ; i++){
		for(j = i+1 ; j<5 ; j++){
			if(vet[i] > vet[j]){
				temp = vet[j];
				vet[j] = vet[i];
				vet[i] = temp;
			}
		}
	}
	
	for(i=0 ; i<5 ; i++){
		printf("%d " , vet[i]);
	}
	

	

}
