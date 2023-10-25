// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arr[],int l,int num){
    int left,right,mid;
    left = 0;
    right = l-1;
    while(left<=right){
        mid = left+(right-left)/2;
        if(arr[mid]==num){
            return mid;
        }
        if(arr[mid]>num){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
   int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
   int length = sizeof(arr)/sizeof(arr[0]);
   
   int has = binarySearch(arr,length,16);
   if(has == -1){
       cout<<"The element you are searching for is not available in this array"<<endl;
   }else{
       cout<<"The element you are searching for is availabe in this array"<<endl;
   }
   
   
   
    return 0;
}