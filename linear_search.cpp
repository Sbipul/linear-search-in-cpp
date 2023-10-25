// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int linear_search(int arr[],int length,int num){
    int i;
    for(i=0;i<length;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[5] = {5,6,9,4,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    int result = linear_search(arr,length,8);
    if(result == -1){
        cout<<"The element is not in the array."<<endl;
    }else{
        cout<<"The element is in the array."<<endl;
    }


    return 0;
}













