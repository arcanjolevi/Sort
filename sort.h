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
void swap(type * a, type * b);

/**
* Selection sort
* Precondition: None
* Postcondition: Array Sorted
* First call: selectionSort(vet, n);
*/
void selectionSort(type vet[], int n;

/**
* insertionSort
* Precondition: None
* Postcondition: Array Sorted
* First call: insertionSort(vet, n);
*/
void insertionSort(type vet[], int n);

/**
* Bubble Sort
* Precondition: None
* Postcondition: Array Sorted
* First call: bubbleSort(vet, n);
*/
void bubbleSort(type vet[], int n);

/**
* Merge Auxiliar
* Precondition: None
* Postcondition: element's position changed
* First call: merge(vet, left, middle, right);
*/
void merge(type vet[], int l, int m, int r);

/**
* Merge Sort
* Precondition: None
* Postcondition: Array Sorted
* First call: mergeSort(vet, 0, n);
*/
void mergeSort(type vet[], int l, int r);

/**
* Quick Sort Auxiliar
* Precondition: None
* Postcondition: element's position changed
* First call: separate(vet, left, right);
*/
int separate(type vet[], int l, int r);

/**
* Quick Sort
* Precondition: None
* Postcondition: Array Sorted
* First call: quickSort(0, n-1);
*/
void quickSort(type vet[], int l, int r);


