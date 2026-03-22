//no 1 se n-1 hai 1 2 3 4....
#include <iostream>
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
    int ans=0;
    for(int i =0 ; i < size ; i++){
        ans^=arr[i];
    }

    for(int i=0;i<size;i++){
        ans^=i;
    }
    cout<<endl<<ans<<endl<<endl;
    return 0;
}