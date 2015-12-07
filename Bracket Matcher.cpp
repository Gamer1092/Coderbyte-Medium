#include <iostream>
using namespace std;

string BracketMatcher(string str) { 

  // code goes here
  int brackets = 0;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '(' || str[i] == ')'){
      brackets += 1;
    }
  }
  if(brackets % 2 == 0){
    return "1";
  }
  else{
    return "0";
  }
  return "0"; 
            
}

int main() { 
  
  // keep this function call here
  cout << BracketMatcher(gets(stdin));
  return 0;
    
}           
