#include <iostream>
#include <sstream>
using namespace std;

string LookSaySequence(int num) { 

  // code goes here   
  stringstream number;
  number << num;
  string nums = number.str();
  stringstream nextNumber;
  int count = 1;
  
  for(int i = 0; i < nums.length(); i++){
    char temp = nums[i];
    if(nums[i+1] == temp){
      count += 1;
    }
    else{
      nextNumber << count << temp;
      temp = nums[i+1];
      count = 1;
    }
  }
  return nextNumber.str(); 
            
}

int main() { 
  
  // keep this function call here
  cout << LookSaySequence(gets(stdin));
  return 0;
    
}           
