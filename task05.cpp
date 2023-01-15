#include <iostream>
using namespace std ;
float totalincome(string screening , int rows, int columns );
main()
{
    int rows ;
    cout << " enter the number of the rows : " << endl ;
    cin >> rows;
    int columns;
    cout << " enter the number of columns  : " << endl;
    cin >> columns;
    string screening ;
    cout << " enter the type of screening " << endl ;
    cin >> screening ;
    float total;
    total = totalincome(screening,rows,columns );
    cout << " the total amount is : " << total << endl;
}
float totalincome(string screening , int rows, int columns )
{
    float amount;
    if (screening=="premiere")
    {
     amount = rows * columns * 12 ;
     return amount;
    }
    if (screening=="normal")
    {
        amount = rows * columns * 7.50;
        return amount;
    }
    if (screening=="discount")
    {
        amount = rows * columns * 5;
        return amount;
    }
    
}
