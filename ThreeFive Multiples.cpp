#include <iostream>
using namespace std;

int ThreeFiveMultiples(int num) { 

  // code goes here 
  int ThreeFiveSum = 0;
  for(int i = 0; i < num; i++){
    if(i % 3 == 0){
      ThreeFiveSum += i;
    }
    else if(i % 5 == 0){
      ThreeFiveSum += i;
    }
  }
  return ThreeFiveSum; 
            
}

int main() { 
  
  // keep this function call here
  cout << ThreeFiveMultiples(gets(stdin));
  return 0;
    
}           
