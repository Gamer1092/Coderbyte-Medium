#include <iostream>
#include <sstream>
using namespace std;

int TripleDouble(int num1, int num2) { 

  // code goes here   
  stringstream Triple;
  stringstream Double;
  Triple << num1;
  Double << num2;
  string number1 = Triple.str();
  string number2 = Double.str();
  bool TripleDouble = false;
  
  if(number1.length() < 3 || number2.length() < 2){
    return 0;
  }
  
  for(int i = 0; i < number1.length(); i++){
    for(int j = 0; j < number2.length(); j++){
      if(number1[i] == number2[j]){
        char temp1 = number1[i];
        char temp2 = number2[j];
        if(temp1 == number1[i+1] && temp1 == number1[i+2] && temp2 == number2[j+1]){
          TripleDouble = true;
        }
      }
    }
  }
  
  if(TripleDouble){
    return 1;
  }
  else{
    return 0;
  }
  
  return 0; 
            
}

int main() { 
  
  // keep this function call here
  cout << TripleDouble(gets(stdin));
  return 0;
    
}           
