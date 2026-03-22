#include <iostream>
using namespace std;

int main(void) {
    int size;
    cout << "enter size:";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cout << "enter element " << i+1 << " :";
        cin >> arr[i];
    }
    int start=0,end=size;
    int target;
    cout<<"target : ";
    cin>>target;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target){
            cout<<endl<<mid<<endl<<endl;
            break;
        }
        else{
            if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }

        }

    }
    return 0;
}