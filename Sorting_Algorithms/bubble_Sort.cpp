// Bubble sort algorithm using C++

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) 
{
  for (int i = 0; i < (n-1); ++i) 
  {
    for (int j = 0; j < n - (i-1); ++j) 
    {
      if (arr[j] > arr[j + 1]) 
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void print(int arr[], int n) 
{
  for (int i = 0; i < n; ++i) 
  {
    cout << "  " << arr[i];
  }
  cout << "\n";
}

int main() 
{
  int n,i;
  cin >> n;
  int arr[n];
  for(i = 0;i<n;i++)
  {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
  print(arr, n);
}