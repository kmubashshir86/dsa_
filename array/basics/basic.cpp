#include <iostream>
using namespace std;
int main(){
    //declaration
    int arr0[5];

    //initializing array
    int arr1[]={1,2,3};
    int arr2[4]={1,2,3,4};
    int arr3[3]={1,2};
    int arr4[2]={};
    char arr5[1]={};

    //acessing 
    cout<<arr3[2]<<endl;//0 hoga 
    
    //garbage value
    cout<<arr4[0]<<endl;

    //changing element
    arr5[0]='a';
    cout<<arr5[0]<<endl;

    return 0;
}