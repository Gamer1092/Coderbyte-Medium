#include <iostream>
#include <string>
using namespace std;

string DashInsertII(string num) { 

  // code goes here   
  string answer = "";
  for(int i = 0; i < num.length(); i++){
    answer += num[i];
    if(num[i] % 2 == 1 && num[i+1] % 2 == 1){
      answer += '-';
    }
    else if(num[i] % 2 == 0 && num[i+1] % 2 == 0 && num[i] != 0 && num[i+1] != 0){
      answer += '*';
    }
  }
  return answer; 
            
}

int main() { 
  
  // keep this function call here
  cout << DashInsertII(gets(stdin));
  return 0;
    
}           
