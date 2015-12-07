#include <iostream>
using namespace std;

int Consecutive(int arr[], int size) { 

  // code goes here 
  int numberCount = 0;
  for(int i = 0; i < size - 1; i++){
    if(arr[i+1] - arr[i] != 1){
      numberCount += (arr[i+1] - arr[i] - 1);
    }
  }
  return numberCount; 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  cout << Consecutive(A, sizeof(A)/sizeof(*A));
  return 0;
    
}           
