#include <iostream>
using namespace std;
float cost(string time, int minutes ,string service);
main()
{
string time;
cout << " enter the time when user use minutes : " << endl;
cin >> time;
int minutes;
cout << " enter the number of minutes : " << endl ;
cin >> minutes;
string service;
cout << " enter the service the user want to use : " << endl;
cin >> service;
float result;
result =  cost( time,  minutes ,service);
cout << " the bill of the cellular telephone company : " << result << endl;
}
float cost(string time, int minutes,string service)
{
    float amount;
   if(service=="regular")
   {
     if(minutes<=50)
     amount=10;
     return amount;
   }   
    if(service=="regular")
   {
     if(minutes>50)
     amount= 10 + (minutes - 50 * 0.20);
     return amount;
   }   
    if(service=="premium")
   {
      if (time=="day")
      {
        if(minutes<=75)
        {
          amount=25;
         return amount;
        } 
      }
   }      
    if(service=="premium")
   {
      if(time=="day")
      {
        if(minutes>75)
        {
          amount=25 + (minutes - 75 * 0.10);
         return amount;
        } 
      }
   }      
    if(service=="premium")
   {
      if(time=="night")
      {
        if(minutes<=100)
        {
          amount=25;
         return amount;
        } 
      }
   }      
     if(service=="premium")
   {
      if(time=="night")
      {
        if(minutes>100)
        {
          amount=25 + (minutes - 100 * 0.05);
         return amount;
        } 
      }
   }      
}