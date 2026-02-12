#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
};

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int key ;
    cin >> key;
    int result = linearSearch(arr,size,key);
    if(result == -1){
        cout << "Element not found in the array" << endl;
    }
    else{
        cout << "Element found at index: " << result << endl;
    }
    return 0;
}