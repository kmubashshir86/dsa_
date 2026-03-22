#include <iostream>
using namespace std;
// by 2 pointer approach
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
        cin>>arr2[i];}
    int i = 0;
    int j=0;
    while(j<size2 && i<size){
        int element = arr[i];
        if(element < arr2[j]){
            i++;
        }
        else if(element > arr2[j]){
            j++;
        }
        else if(element==arr2[j]){
            cout<<element<<" ";
            i++;j++;
        }
    }
    return 0;
}