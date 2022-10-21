#include<iostream>
using namespace std;
// Quick Sort

void swap(int arr[], int i, int j){
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int partition(int arr[], int l, int r){
  int pivot = arr[r];
  int i = l - 1;
  for(int j = l; j < r; j++){
    if(arr[j] < pivot){
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[r]);
  return i + 1;
}

void quickShort(int arr[], int l, int r){
  if(l<r )
  {
    int pi= partition(arr, l, r);
    quickShort(arr, l, pi-1);
    quickShort(arr, pi+1, r);

  }
}

int main(){
  int arr[] = {5, 4, 3, 2, 1};
  quickShort(arr, 0, 4);
  for(int i = 0; i < 5; i++){
    cout << arr[i] << " ";
  }
  return 0;
}

/*
Quick Sort Complexity Analysis
Depend in the pivot element
1. In best case, pivot would be median element,
2. In worst case, pivot could be end element
*/
/*
// Recurrence Relation
1. T(n) = 2T(n/2)+n
T(n) = 2T(n/4)+n/2
T(n) = 2T(n/8)+n/4
.
.
T(1) = 1
Merge Short Complexity: O(nlogn)
T(n)=n+n+n+..log in terms = nlogn

Quick Short Complexity: O(n^2) in worst case
T(n)=T(n-1)+n

*/