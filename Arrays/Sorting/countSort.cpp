#include <iostream>
using namespace std;

void countSort(int a[],int n){
    int k=a[0];
    for(int i=1;i<n;i++) k=max(k,a[i]);
    int count[10]={0};
    for(int i=0;i<n;i++) count[a[i]]++;
    int j=0;
    for(int i=0;i<=k;i++)
        while(count[i]--){
            a[j]=i;
            j++;  
        }
}

int main()
{

    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}