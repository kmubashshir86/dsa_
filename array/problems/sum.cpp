#include <iostream>
using namespace std;

int sum(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=arr[i];
    }
    return ans;
}

int main(void) {
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"sum is : "<<sum(arr,size)<<endl;
    return 0;
}