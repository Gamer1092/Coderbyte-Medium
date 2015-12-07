#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int CountingMinutes(string str) { 

  // code goes here  
  int hour1, hour2;
  int minutes1, minutes2;
  int totalMinutes = 0;
  
  int hyphen = str.find('-');
  string start = str.substr(0,hyphen);
  string end = str.substr(hyphen+1);
  
  int startColon = start.find(':');
  int endColon = end.find(':');
  string startHour = start.substr(0, startColon);
  string endHour = end.substr(0, endColon);
  
  string startAMPM = start.substr(start.length() - 2, 2);
  string startMinutes = start.substr(start.length() - 4, 2);
  
  string endAMPM = end.substr(end.length() - 2, 2);
  string endMinutes = end.substr(end.length() - 4, 2);
  
  stringstream startTimeHour(startHour);
  startTimeHour >> hour1;
  
  stringstream endTimeHour(endHour);
  endTimeHour >> hour2;
  
  stringstream startTimeMinutes(startMinutes);
  startTimeMinutes >> minutes1;
  
  stringstream endTimeMinutes(endMinutes);
  endTimeMinutes >> minutes2;
  
  if(startAMPM == "pm" && hour1 < 12){
    hour1 += 12;
  }
  else if(startAMPM == "am" && hour1 == 12){
    hour1 = 0;
  }
  
  if(endAMPM == "pm" && hour2 < 12){
    hour2 += 12;
  }
  else if(endAMPM == "am" && hour2 == 12){
    hour2 = 0;
  }
  
  totalMinutes = (hour2 * 60 + minutes2) - (hour1 * 60 + minutes1);
  if(totalMinutes < 0){
    totalMinutes += 1440;
  }
  return totalMinutes; 
            
}

int main() { 
  
  // keep this function call here
  cout << CountingMinutes(gets(stdin));
  return 0;
    
}           
