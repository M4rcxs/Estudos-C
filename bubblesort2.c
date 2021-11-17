#include <stdio.h>
void bubble_sort (int vetor[], int n, int x){
    int k, j, aux;
	for(k = 1; k < n; k++){
		printf("\n[%d] ", k);
		for (j = 0; j < n - k; j++){
			if (vetor[j] > vetor[j + 1]){
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
		}
	}
}

int main (void){
    int i, n, x;
    scanf("%d", &n);
    int v[n];
	scanf("%d", &x);
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    bubble_sort(v, n, x);
    printf("\n");
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
	
}