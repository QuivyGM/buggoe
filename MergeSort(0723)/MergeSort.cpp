#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SIZE 10

void merge(int arr[], int begin, int mid, int end){
    
}

void sortarr(int arr[], int begin, int end) {
    
    //when final divide is done
    if(begin>=end)
        return;
    
    int mid = begin+(end-begin)/2;  // is mid
    sortarr(arr, begin, mid);   // left side
    sortarr(arr, mid, end);     // right side
    merge(arr, begin, mid, end);
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
