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
      swaps++;
    }
  }
}
int main(){
  int n;
  cout<<"Enter number of integers: ";
  cin>>n;

  if(n <= 0){
    cout<<"Enter a positive number!";
    return 1;
  }
  vector<int> arr(n);
  cout<<"\nEnter "<<n<<" integers: ";
  for(int i = 0; i < n; ++i){
    cin>>arr[i];
  }
  
  cout<<"\nOroginal list:";
  for(size_t i = 0; i < arr.size(); ++i){
    cout<<arr[i]<<" ";
  }

  int comparisons, swaps;
  spaghettiSort(arr, comparisons, swaps);
  cout<<"\nDescending sorted list: ";
  for(size_t i = 0; i < arr.size(); ++i){
    cout<<arr[i]<<" ";
  }

  cout<<"Comparisons: "<<comparisons;
  cout<<"Swaps: "<<swaps;

  return 0;
}




