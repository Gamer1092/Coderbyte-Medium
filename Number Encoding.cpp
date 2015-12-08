#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

string NumberEncoding(string str) { 

  // code goes here 
  stringstream encryption;
  for(int i = 0; i < str.length(); i++){
    if(isalpha(str[i]) && isupper(str[i])){
      encryption << str[i] - 64;
    }
    
    else if(isalpha(str[i]) && islower(str[i])){
      encryption << str[i] - 96;
    }
    
    else{
      encryption << str[i];
    }
  }
  
  return encryption.str(); 
            
}

int main() { 
  
  // keep this function call here
  cout << NumberEncoding(gets(stdin));
  return 0;
    
}           
