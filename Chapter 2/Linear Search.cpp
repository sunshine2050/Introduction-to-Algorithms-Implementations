#include <iostream>

using namespace std;

// Given value to be searched array A to search in length n of array A
// Return index of the first item in array A that has element = val otherwise return -1
int linear_search(int val, int A[], int n){

    for(int i=0;i<n;i++){
        if(val == A[i]) return i;
    }

    return -1;
}

int main(){

    int A[] = {5, 4, 2, 3, 1, 6};
    int n = 6;

    //Print
    cout<<linear_search(6, A, 6)<<" "<<linear_search(0, A, 6)<<" "<<linear_search(2, A , 6)<<endl;
}
