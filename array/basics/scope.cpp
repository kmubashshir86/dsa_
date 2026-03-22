#include <iostream>
using namespace std;

void update(char arr[],int index){
    arr[index]='u';
}
int main(void) {
    char arr[5]={'a','e','i','o','z'};
    update(arr,4);
    cout<<arr[4]<<endl;
    return 0;
}