#include <stdio.h>


void trocaVetor(int *v1, int v2[5]){
	int i, aux;
	
	for(i=0; i < 5; i++){
		aux =  v1[i];
		v1[i] = v2[i];
		v2[i] = aux;
	}
}

void somaVetor(int v1[], int *v2, int v3[5]){
	int i;
	
	for(i=0; i < 5; i++){
		v3[i] = (v1[i] + v2[i]);
	}
}

int main(){
	int i;
	int vetA[5], vetB[5], vetC[5];
	
	for (i = 0; i < 5; i++){
		scanf("%d",&vetA[i]);
	}
	
	for (i = 0; i < 5; i++){
		scanf("%d",&vetB[i]);
	}
	
	trocaVetor(vetA, vetB);
	somaVetor(vetA, vetB, vetC);
	
	printf("vetA: ");
	for (i = 0; i < 5; i++){
		printf("%d ", vetA[i]);
	}
	printf("\nvetB: ");
	for (i = 0; i < 5; i++){
		printf("%d ", vetB[i]);
	}
	printf("\nvetC: ");
	for (i = 0; i < 5; i++){
		printf("%d ", vetC[i]);
	}
	printf("\n");
	
	return 0;
}


