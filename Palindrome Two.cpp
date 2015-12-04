#include <iostream>
using namespace std;

string PalindromeTwo(string str) { 

  // code goes here  
  string reversedString;
  for(int i = str.length() - 1; i >= 0; i--){
   reversedString = reversedString + str[i]; 
  }
  
  if(reversedString == str){
   return "true"; 
  }
  else{
   return "false"; 
  }
  return "false"; 
            
}

int main() { 
  
  // keep this function call here
  cout << PalindromeTwo(gets(stdin));
  return 0;
    
}           
