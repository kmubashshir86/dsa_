#include <iostream>
using namespace std;

void printarr(int arr[],int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(void) {
    int n = 10;
    int arr[n]={1,2,3,4,5,6,7,8,9,0};
    printarr(arr,n);
    return 0;
}