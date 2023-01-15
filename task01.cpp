#include <iostream>
using namespace std;
string  activity(string temperature,string humidity);
main()
{
string temperature;
cout << " enter the temperature : " << endl;
cin >> temperature;
string humidity;
cout << "enter the humidity : " << endl;
cin >> humidity;
string result;
result =  activity(temperature,humidity);
cout << " we should play " << result << endl;
}
string  activity(string temperature,string humidity)
{
    string print;
  if (temperature=="warm")
  {
    if (humidity=="dry")
    {
        print = "play_tennis";
     return print;
    }
  }
  if (temperature=="warm")
  {
    if (humidity=="humid")
    {
        print = "swim";
     return print ;
    }
  }
   if (temperature=="cold")
  {
    if (humidity=="dry")
    {
        print = "basketball";
     return print;
    }
  }
   if (temperature=="warm")
  {
    
    if (humidity=="humid")
    {
        print = "watch_tv";
     return print ;
    }
  }
}
