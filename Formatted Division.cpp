#include <iostream>
using namespace std;

float FormattedDivision(float num1, float num2) { 

  // code goes here 
  float quotient = 0.0f;
  quotient = num1/num2;
  return quotient; 
            
}

int main() { 
  
  // keep this function call here
  cout << FormattedDivision(gets(stdin));
  return 0;
    
}           
