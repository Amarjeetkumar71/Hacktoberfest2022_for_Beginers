#include<iostream>
using namespace std;
int getMax(int a[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i])
        {
            max=a[i];
        }
    }return max;

}

int getMin(int a[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int arr[100];


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<getMax(arr,n)<<" "<<getMin(arr,n);

    return 0;
}