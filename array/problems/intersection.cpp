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
    int size2;
    cout<<"enter size:";
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>arr2[i];
    }
    

    for(int i = 0; i<size ; i++){
        for(int j=0;j<size2;j++){
            if(arr[i]==arr2[j]){
                arr2[j]=INT_MIN;
                cout<<arr[i]<<" ";
                break;
            }
            else if(arr[i]<arr[j]){
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}