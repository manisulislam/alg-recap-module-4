#include<bits/stdc++.h>
using namespace std;

//merge implementation
void merge(int a[],int l, int m, int r){
    int left_size= m-l+1;
    int right_size= r-m;
    int L[left_size], R[right_size];
    int k=0;
    
    //for  loop left size
    for(int i=1; i<=m; i++){
        L[k]=a[i];
        k++;
    }
    k=0;
    //for loop right size
    for(int i=m+1; i<=r; i++){
        R[k]=a[i];
        k++;
    }

    int i=0, j=0;
    int curr=1;
    while(i<left_size&& j<right_size){
        if(L[i]<=R[j]){
            a[curr]=L[i];
            i++;
        }
        else{
            a[curr]=R[j];
            j++;
        }
        curr++;
    }
    
    while(i<left_size){
        a[curr]=L[i];
        i++;
        curr++;
    }

    while(j<right_size){
        a[curr]=R[j];
        curr++;
        j++;
    }


}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //merge invoke
    merge(a, 0,3, n-1);

    //print a
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}