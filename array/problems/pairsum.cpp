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
    int target ;
    cout<<"enter target : ";
    cin>>target;
    for (int i = 0 ; i < size ; i++){
        int element = arr[i];
        for (int j = 0 ; j < size ; j++){
            if(element+arr[j]==target && i!=j){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                arr[j]=INT_MIN;
            }
        }
    }
    return 0;
}