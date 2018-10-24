/*
Merge Sort : Based on Divide-And-Conquer Algorithm
Desc : It divides the list into smaller list, sort them and stich them back to produce sorted list.

Eg. : 
 i/p list : 34  99  5  2  57  40  8  29
            \   /   \  /   \  /   \   /
            {34,99} {2,5}  {40,57} {8,29}
              \       /       \      /
               \     /         \    /
            {2,5,34,99}   {8,29,40,57}
               \              /
                \            /
            {2,5,8,29,34,40,57,99}  -> o/p sorted list :p
        
Complexity : The running time complexity of merge sort is O(n logn)

*/

#include <iostream>

void display(int a[]){
  for(int i=0; i<10; i++){
    printf("%d ",a[i]);
  }
}

void merge(int a[], int low, int mid, int high){
  int i=low, j=mid+1, k=0,b[high];

  while(i <= mid && j <= high){
    if(a[i] <= a[j]){
      b[k] = a[i];
      i = i+1;
      k = k+1;
    } else{
      b[k] = a[j];
      j = j+1;
      k = k+1;
    }
    
  }
  while(i<=mid){
      b[k] = a[i];
      k = k+1;
      i = i+1;
    }
    while(j<=high){
      b[k] = a[j];
      j = j+1;
      k = k+1;
    }
  for(int i=0; i<k;i++){
    a[i] = b[i];
  }

}


void mergeSort(int a[], int low, int high){
  int mid;
  if(low<high){
    mid = (low+high)/2;
  }
  
  mergeSort(a, low, mid);
  mergeSort(a, mid+1, high);
  merge(a, low, mid, high);

  display(a);
}

int main()
{
  int a[] = {34,  99,  5,  2,  57,  40,  8,  29};
  mergeSort(a,0,9);
  return 0;
}















