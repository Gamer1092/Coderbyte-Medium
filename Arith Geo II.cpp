#include <iostream>
using namespace std;

string ArithGeoII(int arr[]) { 
  
  // code goes here
  int size = sizeof(arr)/sizeof(arr[0]);
  int difference = arr[1] - arr[0];
  int ratio = arr[1]/arr[0];
  bool arithmetic = false;
  bool geometric = false;
  
  for(int i = 1; i < size; i++){
    if(arr[i+1] - arr[i] == difference){
      arithmetic = true;
    }
    
    else if(arr[i+1]/arr[i] == ratio){
      geometric = true;
    }
  }
  
  if(arithmetic){
   return "Arithmetic";
  }
  else if(geometric){
    return "Geometric";
  }
  else{
    return "-1";
  }
  return "-1"; 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  cout << ArithGeoII(A);
  return 0;
    
}           

  }
  else{
    return "-1";
  }
  return "-1"; 
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  cout << ArithGeoII(A);
  return 0;
    
}           
