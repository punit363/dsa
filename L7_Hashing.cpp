#include<iostream>

using namespace std;


// If given the range of values of an array
// We do a simple preprocessing in hash array to get no of times each element appears

int arr[10] = {2,4,5,2,3,7,2,1,12,10};

int main(){

int hashArr[13]={0};
for(int i=0; i<10; i++){
hashArr[arr[i]] += 1;
}
int i= 0;
while(i<14){
    cout<<hashArr[i]<< " "<< i <<endl;
    i++;
}
}

