#include <iostream>
using namespace std;

int main(void) {
    int arr[2]={1,2};
    swap(arr[0],arr[1]);
    int temp;
    temp=arr[0];
    arr[0]=arr[2];
    arr[2]=temp;
    return 0;
}