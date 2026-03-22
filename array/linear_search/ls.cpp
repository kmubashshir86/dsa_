#include <iostream>
using namespace std;

int ls(int arr[],int size,int target){
    int index=-1;
    for(int i =0; i<size ;i++){
        if(arr[i]==target){
            index=i;
        }
    }
    return index;
}

int main(void){
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    int tar;
    cout<<"enter target : ";
    cin>>tar;
    cout<<ls(arr,size,tar)<<endl;
    return 0;
    
}