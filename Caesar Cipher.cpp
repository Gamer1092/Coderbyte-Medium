#include <iostream>
#include <cctype>
using namespace std;

string CaesarCipher(string str, int num) { 

  // code goes here  
  for(int i = 0; i < str.length(); i++){
    //For Caesar Cipher shift each letter in the string by num
    if(isalpha(str[i])){
      str[i] += num;
      
      //If it goes past 'Z' but not before 'a', minus it by 26
      if(str[i] > 'Z' && str[i] < 'a'){
        str[i] -= 26;
      }
      
      //If it goes past 'z', minus it by 26
      if(str[i] > 'z'){
        str[i] -= 26;
      }
    }
  }
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << CaesarCipher(gets(stdin));
  return 0;
    
}           
