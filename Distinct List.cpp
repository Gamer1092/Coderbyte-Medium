#include <iostream>
#include <algorithm>
using namespace std;

int DistinctList(int arr[], int numElements) { 

  // code goes here
  // Easier to find duplicates in a sorted array
  sort(arr, arr+numElements);
  int duplicates = 0;
  int i = 0;
  
  //Traverse through the array searching for duplicates until we have 
  //reached the end
  while(i < numElements){
    if(arr[i] == arr[i+1]){
      duplicates += 1;
      i++;
    }
    else{
      i++;
    }
  }
  return duplicates; 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  cout << DistinctList(A, sizeof(A)/sizeof(*A));
  return 0;
    
}           
