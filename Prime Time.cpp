#include <iostream>
using namespace std;

string PrimeTime(int num) { 

  // code goes here   
  // A number is prime if it has only two factors: 1 and itself
  // 0 divided by any number is 0, therefore 0 is not a prime number
  if(num == 0){
   return "false"; 
  }
  
  // 1 has only one factor and therefore is not a prime number
  if(num == 1){
   return "false"; 
  }
  
  //2 has only two factors and therefore is a prime number
  else if(num == 2){
   return "true"; 
  }
  
  else if (num >= 3){
    for(int i = 2; i < num; i++){
      if(num % i == 0){
        return "false"; 
      }
      else{
        return "true";
      }
    }
  }
  return "true"; 
            
}

int main() { 
  
  // keep this function call here
  cout << PrimeTime(gets(stdin));
  return 0;
    
}           
