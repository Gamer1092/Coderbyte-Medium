#include <iostream>
#include <sstream>
using namespace std;

int StringReduction(string str) { 

  // code goes here 
  string newString;
  int i = 0;
  if((str[i] == 'a' && str[i+1] == 'b') 
     || (str[i] == 'b' && str[i+1] == 'a')){
    newString += 'c';
    i++;
  }
  if((str[i] == 'a' && str[i+1] == 'c') 
     || (str[i] == 'c' && str[i+1] == 'a')){
    newString += 'b';
    i++;
  }
  if((str[i] == 'b' && str[i+1] == 'c') 
     || (str[i] == 'c' && str[i+1] == 'b')){
    newString += 'a';
    i++;
  }
  if(str[i] == str[i+1]){
    newString += str[i]; 
    newString += str[i+1]; 
    i += 2;
  }
  return newString.length(); 
            
}

int main() { 
  
  // keep this function call here
  cout << StringReduction(gets(stdin));
  return 0;
    
}       
