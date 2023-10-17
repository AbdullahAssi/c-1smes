#include <iostream>
#include <string>
using namespace std;
struct Assistant
{
  string name;
  string weather;
  int lastGroceryTrip;
  string payDayWeek;
  string car;
  string result;
};



int main() {
  int num_assistants = 7;
  Assistant assistants[num_assistants] = {
  {"Assi", "Rain", 3, "NO", "NO", "Stay in"},
  {"Zohaib", "Sun", 3, "NO", "YES", "Stay in"},
  {"Sultan", "Rain", 5, "YES", "YES", "Go out"},
  {"Mike", "Snow", 1, "YES", "NO", "Stay in"},
  {"Flitz", "Sun", 5, "YES", "YES", "Go out"},
  {"Jannie", "Snow", 6, "YES", "YES", "Stay in"},
  {"Abrar", "Rain", 3, "NO", "YES", "Stay in"}};  
  cout << "Name\tWeather\tLast grocery trip (days)\tPay day week\tCar\tResult" << endl;
  for (int i = 0; i < num_assistants; i++)
   {
      cout << assistants[i].name << "\t" << assistants[i].weather << "\t\t\t" 
    	<< assistants[i].lastGroceryTrip << "\t\t\t" << assistants[i].payDayWeek
    << "\t" << assistants[i].car  << "\t" << assistants[i].result << endl;
  }
  return 0;
}
