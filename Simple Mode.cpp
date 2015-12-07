#include <iostream>
#include <algorithm>
using namespace std;

int SimpleMode(int arr[], int numElements) { 

  // code goes here   
  int max = 1;
  int count = 1;
  int mode;
  
  sort(arr, arr + numElements); //sorting the array makes it easier to find the mode
  int first = arr[0];
  for(int i = 0; i < numElements; i++){
    if(arr[i] == first){ 
     count += 1; 
    }
    else{
     first = arr[i]; 
    }
    
    if(count > max){
     mode = arr[i];
     max = count;
    }
  }
  
  if(max == 1){
   return -1; 
  }
  
  else{
   return mode; 
  }
  return -1; 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  cout << SimpleMode(A, sizeof(A)/sizeof(*A));
  return 0;
    
}           
