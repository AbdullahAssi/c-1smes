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


int assi(Assistant assistants[], int num_assistant, string search);

int main() {
  int num_assistant = 7;
  Assistant assistants[num_assistant] = {
  {"Assi", "Rain", 3, "NO", "NO", "stay in"},
  {"Zohaib", "Sun", 3, "NO", "YES", "stay in"},
  {"Sultan", "Rain", 5, "YES", "YES", "go out"},
  {"Mike", "Snow", 1, "YES", "NO", "stay in"},
  {"FLitz", "Sun", 5, "YES", "YES", "go out"},
  {"Jannie", "Snow", 6, "YES", "YES", "stay in"},
  {"Abrar", "Rain", 3, "NO", "YES", "stay in"}};  
  cout << "Name\tWeather\tLast grocery trip (days)\tPay day week\tCar\tResult" << endl;
  for (int i = 0; i < num_assistant; i++)
   {
      cout << assistants[i].name << "\t" << assistants[i].weather << "\t\t\t" 
    	<< assistants[i].lastGroceryTrip << "\t\t\t" << assistants[i].payDayWeek
    << "\t" << assistants[i].car  << "\t" << assistants[i].result << endl;
  }
  cout<<"\n\n";
	
 char again;
 do
 {
  string search; 
  do 
  {
   cout<<"Enter what you want to search (stay in/go out) : ";
   getline(cin,search);
  }
  while(search != "stay in" && search != "go out");
  cout<<"The number of '"<<search <<"' is "<<assi(assistants, num_assistant , search)<<endl;
  cout<<"Do you want to check again (y/n) ? : ";
  cin>>again;
 }
 while(again ='y' || again = 'n');
   
}

int assi(Assistant assistants[],  int num_assistant , string search)
{
 int count=0;
 for(int i=0;i<num_assistant;i++)
 {
  if(assistants[i].result==search)
  {
   count++;
  }
 }
 return count;
}
