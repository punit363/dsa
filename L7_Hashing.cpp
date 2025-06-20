#include<iostream>
#include<string>
#include <unordered_map>
using namespace std;


// 1. If given the range of values of an array
//    We do a simple preprocessing in hash array to get no of times each element appears

// int arr[10] = {2,4,5,2,3,7,2,1,12,10};

// int main(){

// int hashArr[13]={0};
// for(int i=0; i<10; i++){
// hashArr[arr[i]] += 1;
// }
// int i= 0;
// while(i<14){
//     cout<<hashArr[i]<< " "<< i <<endl;
//     i++;
// }

// }

// 2. what if it was not an integer aaray but a character array
//    the logic is same just convert characters to their ASCII value
//    a = 97, c = 99 hence a = a - (a-1) = 1 and c = c - (a-1) = 3

// string str = "metamorphosis";


// int main(){
// int hashArr[27]={0};

// for(int i=0;i<27;i++){
    
//     int a = 'a';
//     int b = str[i];
//     cout<<i<<" ";
//     cout<<hashArr[i]<<" ";
//     cout<<a<<" ";
//     cout<<b<<endl;
// hashArr[b-a+1] += 1;
// }
// int i= 0;
// while(i<27){
//     cout<<hashArr[i]<< " "<< i <<endl;
//     i++;
// }
// }

// 3. using stl MAP
//    always prefer unordered_map coz the best and avg time complexity for read and write is O(1) while worst is O(N)
//    time complexity of map is O(N) in best avg and worst case, the worst case in unordered_map will rarely occur

int arr[10] = {2,4,5,2,3,7,2,1,12,10};

unordered_map<int,int> mpp;

int main(){
    for(int i = 0; i<10;i++){
        mpp[arr[i]]++;
    }
for(auto it : mpp){
    cout<<it.first<<" "<<it.second<<endl;
}
}

//TODO: Hashing, Division Method, Collision minor topic end of the video

//Prob: Highest and lowest frequency element