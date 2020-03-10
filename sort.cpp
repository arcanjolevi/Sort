#include "sort.h"
/**
 * Sorting Algorithms -> c++ 
 * @author Levi Arcanjo
 */

#define type int

/**
* Swap function
* Precondition: None
* Postcondition: exchanged content
* First call: swap(&x, &y);
*/
void swap(type * a, type * b){
	type t = *a; *a = *b; *b = t;
}

/**
* Selection sort
* Precondition: None
* Postcondition: Array Sorted
* First call: selectionSort(vet, n);
*/
void selectionSort(type vet[], int n){
	int i, j, min;
	for(i = 0;i < n - 1;i++){
		min = i;
		for(j = i+1;j < n;j++)
			if(vet[j] < vet[min])
				min = j;					
		swap(&vet[i], &vet[min]);
	}
}

/**
* insertionSort
* Precondition: None
* Postcondition: Array Sorted
* First call: insertionSort(vet, n);
*/
void insertionSort(type vet[], int n){
	int i, j, x;
	for(i = 1;i < n;i++){
		x = vet[i];
		for(j = i - 1; j >= 0 && vet[j] > x;j--)
			vet[j+1] = vet[j];
		vet[j+1] = x;
	}
}

/**
* Bubble Sort
* Precondition: None
* Postcondition: Array Sorted
* First call: bubbleSort(vet, n);
*/
void bubbleSort(type vet[], int n){
	int i, j, temp;
	for(i = n - 1;i >= 0;i--)
		for(j = 1;j <= i;j++)
			if(vet[j] < vet[j - 1])
				swap(&vet[j], &vet[j - 1]);	
}

/**
* Merge Auxiliar
* Precondition: None
* Postcondition: element's position changed
* First call: merge(vet, left, middle, right);
*/
void merge(type vet[], int l, int m, int r){
	int i, j, k;
	int * vetAux;
	vetAux = new type[r-l];
	i = l;j = m; k = 0;
	while(i < m && j < r){
		if(vet[i] <= vet[j])
			vetAux[k++] = vet[i++];
		else 
			vetAux[k++] = vet[j++];
	}

	while(i < m) vetAux[k++] = vet[i++];
	while(j < r) vetAux[k++] = vet[j++];
	for(i = l;i < r;i++)
		vet[i] = vetAux[i-l];
	delete vetAux;
}

/**
* Merge Sort
* Precondition: None
* Postcondition: Array Sorted
* First call: mergeSort(vet, 0, n);
*/
void mergeSort(type vet[], int l, int r){
	if(l < r - 1){
		int m = (l+r)/2;
		mergeSort(l, m);
		mergeSort(m, r);
		merge(l, m, r);
	}
}

/**
* Quick Sort Auxiliar
* Precondition: None
* Postcondition: element's position changed
* First call: separate(vet, left, right);
*/
int separate(type vet[], int l, int r){
	type pivo;
	int j, k, temp;
	pivo = vet[r];
	j = l;
	for(k = l;k < r;k++)
		if(vet[k] <= pivo){
			swap(&vet[j], &vet[k]);
			j++;
		}
		vet[r] = vet[j];
		vet[j] = pivo;
		return j;
}

/**
* Quick Sort
* Precondition: None
* Postcondition: Array Sorted
* First call: quickSort(0, n-1);
*/
void quickSort(type vet[], int l, int r){
	int j;
	if(l < r){
		j = separate(l, r);
		quickSort(l,j - 1);
		quickSort(j + 1, r);
	}	
}


