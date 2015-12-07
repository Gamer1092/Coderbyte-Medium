#include <iostream>
#include <sstream>
using namespace std;

string PermutationStep(int num) { 

  // code goes here   
  stringstream number;
  number << num;
  string value = number.str();
  
  for(int i = 1; i < value.length() - 1; i++){
    if(value[i] < value[i+1]){
      value[i] = value[i+1];
      value[i+1] = value[i];
    }
  }
  
  if(value > number.str()){
    return value;
  }
  else{
    return "-1";
  }
  return "-1"; 
            
}

int main() { 
  
  // keep this function call here
  cout << PermutationStep(gets(stdin));
  return 0;
    
}           
