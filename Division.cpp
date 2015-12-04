#include <iostream>
using namespace std;

int Division(int num1, int num2) { 

  // code goes here   
  // Best way to do this is to use a for loop to traverse through the numbers
  // and find the GCF that evenly goes into both numbers with no remainders
  // Note: It is impossible to divide any number by 0
  int GCF = 1;
  for(int i = 1; i < num1; i++){
    for(int i = 1; i < num2; i++){
      if((num1 % i == 0) && (num2 % i == 0)){
       GCF = i; 
      }
    }
  }
  return GCF; 
            
}

int main() { 
  
  // keep this function call here
  cout << Division(gets(stdin));
  return 0;
    
}           
