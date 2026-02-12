#include <bits/stdc++.h>
using namespace std;

void revArr(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
};

void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
};

int main(){
    int size =6;
    int arr[size] = {1,2,3,4,5,6};
    revArr(arr,size);
    printArr(arr,size);
    return 0;
}