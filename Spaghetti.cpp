#include<iostream>
#include<vector>
using namespace std;

void spaghettiSort(vector<int>& arr, int& comparisons, int&wraps){
  comparisons = 0;
wraps = 0;
int n = arr.size();

for (int i = 0, i < n-1, ++i){
  int maxIdx = i;
  for(int j = i + 1, j < n, ++j){
  comparison++;
  if (arr[j] > arr[maxIdx]){
  maxIdx = j;
  }
  }
if (maxIdx != i){
  int temp = arr[maxIdx];
  arr[maxIdx] = arr[i];
  arr[i] = temp;
}
}
}
  


