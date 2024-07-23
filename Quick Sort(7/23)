#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SIZE 10

void printarr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    cout << "\n\n";
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    
    int pointer = low - 1;
    for(int i=low; i<high; i++){
        if(arr[i]<=pivot){
            pointer++;
            swap(arr[i], arr[pointer]);
        }
    }
    swap(arr[pointer + 1], arr[high]);
    
    printarr(arr, SIZE);
    return (pointer+1);
}

void sortarr(int arr[], int low, int high) {
    if(low<high){
        int pivot = partition(arr, low, high);
        sortarr(arr, 0, pivot-1);
        sortarr(arr, pivot+1, high);
    }
}

int main() {
    srand(time(0));

    int arr[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % 1000;
    printarr(arr, SIZE);

    sortarr(arr, 0, SIZE-1);

    printarr(arr, SIZE);

    return 0;
}
