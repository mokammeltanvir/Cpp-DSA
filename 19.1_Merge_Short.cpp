#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){

  int n1 = mid - l + 1;
  int n2 = r - mid;

  int a[n1], b[n2]; // temp arrays

  for(int i = 0; i < n1; i++){
    a[i] = arr[l + i];
  }
  for(int i = 0; i < n2; i++){
    b[i] = arr[mid + 1 + i];
  }

  int i = 0, j = 0, k = l;

  while(i < n1 && j < n2){
    if(a[i] < b[j]){
      arr[k] = a[i];
      k++;
      i++;
    }
    else{
      arr[k] = b[j];
      k++;
      j++;
    }
  }
  while(i < n1){
    arr[k] = a[i];
    k++;
    i++;
  }
  while(j < n2){
    arr[k] = b[j];
    k++;
    j++;
  }

}

void mergeSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 4);
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//Output: 1 2 3 4 5
/* Recurrance Relation: 
1. T(n) = 2T(n/2)+n
T(n) = 2T(n/4)+n/2
T(n) = 2T(n/8)+n/4
.
.
T(1) = 1

Merge Short Complexity: O(nlogn)
Levels:
n/2^k = 1
n = 2^k
k = log n
======
T(n)=n+n+n+..log in terms = nlogn
*/
/*
Time Complexity: O(n log n)
Space Complexity: O(n)
*/

