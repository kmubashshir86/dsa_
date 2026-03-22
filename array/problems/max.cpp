#include <iostream>
#include <climits>
using namespace std;

int maxi(int arr[],int size){
    int ans=INT_MIN;
    for( int i = 0 ; i < size ; i++){
        if(ans<arr[i]){
            ans=arr[i];
        }}
    return ans;}

int main(){
    int n = 10;
    int arr[n]={1,3,35,34,645,64563,7,722,1,3};
    cout<<maxi(arr,n)<<endl;
    return 0;
}