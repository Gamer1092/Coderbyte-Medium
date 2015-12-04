#include <iostream>
#include <sstream>
using namespace std;

string RunLength(string str) { 

  // code goes here   
  stringstream answer;
  int count = 1;
  for(int i = 0; i < str.length(); i++){
    char temp = str[i];
    if(str[i+1] == temp){
      count += 1;
    }
    else{
      answer << count << temp;
      temp = str[i+1];
      count = 1;
    }
  }
  return answer.str(); 
            
}

int main() { 
  
  // keep this function call here
  cout << RunLength(gets(stdin));
  return 0;
    
}           
