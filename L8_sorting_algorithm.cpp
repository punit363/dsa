#include<iostream>
#include<algorithm>

using namespace std;

// Selection Sort
// Select the smallest int and swap with arr[0] (if ascending order)

int arr[6] = {3,23,5,2,9,11};

void selectionSort(int arr[]){

    for(int i = 0; i<6; i++){
        int smallestElementIndex=i;
        for(int j = i; j<6; j++){
            if(arr[j]<arr[smallestElementIndex]){
                smallestElementIndex = j;
            }
        }
        swap(arr[i],arr[smallestElementIndex]);
    }

}
int main(){
    selectionSort(arr);
int i = 0;
int n = 6;
while(i<n){
    cout<<arr[i]<<endl;
    i++;
}
}