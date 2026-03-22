#include <iostream>
using namespace std;

int main(void) {
    //include only 0 1 2
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr[size];
    int temp;
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>temp;
        if (temp!=0 && temp!=1){
            i--;
        }
        else{
            arr[i]=temp;
        }
    }
    int i = 0;
    int j = size-1;
    while(j>i){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
        else if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;  
        }
    }

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}