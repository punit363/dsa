//Recursions
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


//Prob1. Print 1 - N

void rec(int i, int n){
    if(i>n) return;
    cout<< i << " ";
    rec(i+1,n);
}

//Prob2. Print 1 - N using backtracking

void recBack(int i, int n){
    if(i<0) return;
    recBack(i-1,n);
    cout << i << " ";
}

//prob3. Print sum of N numbers that prints value

//---> parameter type solution

void sumPara(int n, int sum){
    if(n<1){
        cout<<sum<<" ";
        return;
    }
    sumPara(n-1, sum+n);
}

//---> function type solution that returns value

int funcSum(int n){
    if(n==0){
return 0;    
}
    return n + funcSum(n-1);
}

//---> factorial of n

int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

// ---> Reverse an array

int arr[5] = {1,2,3,4,5};

void revArr(int l, int r){
if(l>=r){
    cout<<"array reversed ";
    return;
}
swap(arr[l],arr[r]);
revArr(l+1,r-1);
}

// alternate solution

void revArr1(int i, int arr[], int n){
    if(i>n/2){
        cout<<"array reversed ";
        return;
    }
    swap(arr[i],arr[n-i-1]);
    revArr1(i+1,arr,n);
}

//---> Check is a string is palindrome


void palindrome(string str, int n ,int i){
if(i>n/2){
    cout<<"this is a palindrome";
    return;
}
if(str[i]!=str[n-i-1]){
    cout<<"this is not a palindrome";
    return;
}
palindrome(str,n,i+1);
}

//---> multiple recursion calls
// 0, 1, 1, 2, 3, 5, 8 ..... f(n) = f(n-1) + f(n-2)
int fibonacci(int n){
if(n<=1){
    return n;
}
// cout << fibonacci(n) << " ";
return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    rec(1,12);
    recBack(12,12);
    sumPara(3,0);
    cout << funcSum(5)<<"-";
    cout << fact(4)<<"-";
    revArr(0,4);
    int i=4;
        cout<<arr[i];
        i--;

    palindrome("ollo",4,0);
    cout<<fibonacci(6);
    return 0;
}