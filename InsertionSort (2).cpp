#include<iostream>
using namespace std;

insertionSort(int arr[],int n)
{
  for(int i=1;i<n;i++)
  {
    int puc=arr[i];
    for(j=i-1;j>=0&& a[j]>puc;j--)
    {
        a[j+1]=a[j];

    }
      a[j+1]=puc;
  }
}

int main()
{
  int arr[]={1,7,5,8,6};
  int  n=5;
  insertionSort(arr,n);
  for(i=0;i<n;i++)
  cout<<a[i]<<"\t";
}