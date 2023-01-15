#include <iostream>
using namespace std;
float lowest_price(string time , float distance);
main()
{
    string time;
    cout << " enter the time of the day :" << endl;
    cin >> time;
    float distance ;
    cout << " enter the distance the student travelled :" << endl;
    cin >> distance;
    float result;
    result = lowest_price(time ,  distance);
    cout << " the lowest price for the given number of the kilometers: " << result << endl; 
}
float lowest_price(string time , float distance)
{
    float amount;
    if (time == "day" && distance < 20)
    {
        amount = 0.70 + (0.79 * distance );
        return amount ;


    }
     else if (time == "night" && distance < 20)
    {
        amount = 0.70 + (0.90 * distance );
        return amount ;


    }
     else  if (distance > 20 && distance <= 100)
    {
        amount = 0.09 * distance;
        return amount ;


    }
     else if (distance > 100)
    {
        amount = 0.06 * distance   ;
        return amount ;


    }
    
}