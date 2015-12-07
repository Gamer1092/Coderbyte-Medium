#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

string SwapII(string str) { 

  // code goes here  
  for(int i = 0; i < str.length(); i++){
    if(isalpha(str[i]) && islower(str[i])){
      str[i] = toupper(str[i]);
    }
    
    else if(isalpha(str[i]) && isupper(str[i])){
      str[i] = tolower(str[i]);
    }
    
    if(isdigit(str[i])){
      for(int j = i; j < str.length(); j++){
        if(isdigit(str[j]) && (str[j-1] != ' ' || !ispunct(str[j-1]))){
          char temp = str[i];
          str[i] = str[j];
          str[j] = temp;
        }
      }
    }
  }
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << SwapII(gets(stdin));
  return 0;
    
}           
