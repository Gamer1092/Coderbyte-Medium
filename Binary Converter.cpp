#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

int BinaryConverter(string str) { 

  // code goes here
  // Convert binary code to decimal
  // Best way is through a for loop
  int decimal = 0;
  int length = str.length();
  for(int i = 0; i < length; i++){
    if(str[i] == '1'){
     decimal += pow(2, (length-i-1)); 
    }
  }
  return decimal; 
            
}

int main() { 
  
  // keep this function call here
  cout << BinaryConverter(gets(stdin));
  return 0;
    
}           
