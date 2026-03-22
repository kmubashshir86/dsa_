#include <iostream>
//array mai jo element honge are shorter than size of array
using namespace std;

int occurance(int arr[],int size,int target){
    int ans=0;
    for (int i = 0 ; i < size ; i++){
        if (arr[i]==target){
            ans+=1;
        }
    }
    return ans;}

int main(void) {
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    int arr_freq[size]={0};
    for(int i=0;i<size;i++){
        if (arr_freq[arr[i]]==0){
            arr_freq[arr[i]]=occurance(arr,size,arr[i]);}
    }


    for (int i = 0 ; i < size ; i++){
        if(occurance(arr_freq,size,arr_freq[i])>2 && arr_freq[i]!=0){
            cout<<endl<<-1<<endl;
            return 0;
        }
    }
    cout<<endl<<1<<endl;
    return 0;
}