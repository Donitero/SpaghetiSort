#include<iostream>
#include<vector>
using namespace std;

void spaghettiSort(vector<int>& arr, int& comparisons, int& swaps){
  comparisons = 0;
  swaps = 0;
  int n = arr.size();

  for(int i = 0; i < n-1; ++i){
    int maxIdx = i;
    for(int j = i+1; j < n; ++j){
      comparisons++;
      if(arr[j] > arr[maxIdx]){
        maxIdx = j;
      }
    }
    if(maxIdx != i){
      int temp = arr[maxIdx];
      arr[maxIdx] = arr[i];
      arr[i] = temp;
    }
  }
}
int main(){
  
}
