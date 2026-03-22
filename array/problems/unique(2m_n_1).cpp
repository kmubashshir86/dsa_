#include <iostream>
using namespace std;

int main(void) {
    int ans=0;
    int size = 9;
    int arr[size]={1,1,2,3,3,4,4,21,2};
    for(int i = 0 ; i < size ; i++){
        ans^=arr[i];
    }
    cout<<"extra element is : "<<ans<<endl;
    return 0;
}