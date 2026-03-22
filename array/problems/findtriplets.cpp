#include <iostream>
#include <climits>
using namespace std;

int main(void) {
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"enter target : ";
    int target;
    cin>>target;

    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            for(int k = 0 ; k < size ; k++)
                if(arr[i]+arr[j]+arr[k]==target && i!=j && j!=k && k!=i){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    arr[k]=INT_MIN;
                }
        }
    }
    return 0;
}