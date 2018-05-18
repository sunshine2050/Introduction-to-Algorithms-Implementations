#include <iostream>

using namespace std;

int main(){

    int A[] = {5, 4, 2, 3, 1, 6};
    int n = 6;

    // Insertion Sort
    for(int j=1;j<n;j++){
        int key = A[j];

        int i = j-1;
        while(i>=0 && A[i] > key){
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;
    }

    //Print
    for(int i=0;i<n;i++) cout<<A[i]<<" ";
}
