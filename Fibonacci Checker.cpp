#include <iostream>
using namespace std;

string FibonacciChecker(int num) { 

  // code goes here 
  int sum = 0;
  int Fibonacci1 = 0;
  int Fibonacci2 = 1;
  
  while(sum < num){
    sum = Fibonacci1 + Fibonacci2;
    Fibonacci1 = Fibonacci2;
    Fibonacci2 = sum;
  }
  
  if(sum == num){
    return "yes";
  }
  else{
    return "no";
  }
  return "no"; 
            
}

int main() { 
  
  // keep this function call here
  cout << FibonacciChecker(gets(stdin));
  return 0;
    
}           
