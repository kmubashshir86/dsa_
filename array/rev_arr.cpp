//reverse array 
#include <iostream>
using namespace std;

void rev(int arr[],int size){
    for(int i = 0 ; i < size/2 ; i++){
        swap(arr[i],arr[size-1-i]);//or swap with temp var or swap w/o temp var by */ +- ^ method
    }
}
int main(){
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    rev(arr,size);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}