#include <iostream>
using namespace std ;
float discount(string month, string day, int amount );
main()
{
string month ;
cout << " enter the month ";
cin >> month;
string day;
cout << " enter the day ";
cin >> day;
int amount ;
cout << " enter the amount ";
cin >> amount ;
float result ;
result = discount(month,day,amount);
cout << "the amount is " << result ;
} 
float discount(string month, string day, int amount )
 {
    float actualamount ;
    if (day == "sunday" || month == "october")
    {
        actualamount = amount - (amount * .10);
        return actualamount;
    }
    else 
    {
        
    }
 
}