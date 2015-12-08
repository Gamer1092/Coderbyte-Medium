#include <iostream>
#include <sstream>
using namespace std;

string MultipleBrackets(string str) { 

  // code goes here   
  stringstream BracketPairs;
  int brackets = 0;
  int leftBrackets = 0;
  int leftSquareBrackets = 0;
  int rightBrackets = 0;
  int rightSquareBrackets = 0;
  
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '('){
      leftBrackets++;
    }
    else if(str[i] == '['){
      leftSquareBrackets++;
    }
    else if(str[i] == ')'){
      rightBrackets++;
    }
    else if(str[i] == ']'){
      rightSquareBrackets++;
    }
  }
  
  if(leftBrackets == rightBrackets && leftSquareBrackets == rightSquareBrackets){
    brackets += (leftBrackets + rightBrackets)/2;
    brackets += (leftSquareBrackets + rightSquareBrackets)/2;
    BracketPairs << 1 << " " << brackets;
  }
  
  else{
    BracketPairs << 0;
  }
  
  return BracketPairs.str(); 
            
}

int main() { 
  
  // keep this function call here
  cout << MultipleBrackets(gets(stdin));
  return 0;
    
}           
