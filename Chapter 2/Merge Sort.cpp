#include <iostream>

#define oo 1e9
using namespace std;

void merge(int A[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1], R[n2 + 1];


    for(int i=0;i<n1;i++) L[i] = A[p + i];
    for(int i=0;i<n2;i++) R[i] = A[q + i + 1];
    /*
    cout<<endl;
    for(int i=0;i<n1;i++) cout<<L[i]<<" ";
    cout<<endl;
    for(int i=0;i<n2;i++) cout<<R[i]<<" ";
    cout<<endl;
    */
    L[n1] = oo; R[n2] = oo;
    int i = 0, j = 0;
    for(int k = p;k<=r;k++){
        if(L[i]<=R[j]) A[k] = L[i++];
        else A[k] = R[j++];
    }
}

void merge_sort(int A[], int p, int r){
    if(r<=p) return;
    int q = (p+r)/2;
    merge_sort(A, p, q);
    merge_sort(A, q + 1, r);
    merge(A, p, q, r);

}
int main(){
    int A[] = {2, 4, 5, 7, 1, 2, 3, 6};
    int n = 8;

    merge_sort(A, 0, n - 1);
    //cout<<endl;
    //cout<<endl;
    for(int i=0;i<n;i++) cout<<A[i]<<" ";

}
