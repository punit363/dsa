#include<iostream>
#include<algorithm>

using namespace std;

// Selection Sort
// Select the smallest int and swap with arr[0] (if ascending order)

int arr[6] = {3,23,5,2,9,11};

void selectionSort(int arr[],int size){

    for(int i = 0; i<size; i++){
        int smallestElementIndex=i;
        for(int j = i; j<size; j++){
            if(arr[j]<arr[smallestElementIndex]){
                smallestElementIndex = j;
            }
        }
        swap(arr[i],arr[smallestElementIndex]);
    }

}


// Bubble Sort
// swap adjacent elements

void bubbleSort(int arr[],int size){
    int swap_ = 0; //optimisation-->already sorted
for(int i = 0; i<size; i++){
    for(int j = 0;j<size-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swap_=1;
        }
    }
    if(swap_==0){
        break;
    }
}
}

// Insertion sort
// Keep the left most element in the sorted array and rest in unsorted
// Pick elements from the unsorted and position them correctly in the sorted array

void insertionSort(int arr[],int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
}

int main(){
    // selectionSort(arr,6);
    // bubbleSort(arr,6);
    insertionSort(arr,6);
    int i = 0;
    int n = 6;
    while(i<n){
    cout<<arr[i]<<endl;
    i++;
}
}

// Merge Sort