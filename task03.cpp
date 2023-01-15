#include <iostream>
using namespace std;
string  zodiac_sign(string month,int date);
main()
{
    string month;
    cout << " enter the month in which you born : " << endl ;
    cin >> month;
    int date;
    cout  << " enter the date  : " << endl;
    cin >> date;
    string result;
    result =  zodiac_sign(month, date);
    cout << " the zodiac sign is  : " << result ;
}
string  zodiac_sign(string month,int date)
{
    string sign;
    if (month=="march" || month=="april")
    {
        if (date<=21 || date<=19)
        {
            sign="Aries";
            return sign;
        }
    }
    if (month=="april" || month=="may")

        if (date<=20 || date<=20)
        {
            sign="Taurus";
            return sign;
        }
    
     if (month=="may" || month=="june")
    {
        if (date<=21 || date<=20)
        {
            sign="Gemini";
            return sign;
        }
    }
     if (month=="june" || month=="july")
    {
        if (date<=21 || date<=22)
        {
            sign="Cancer";
            return sign;
        }
    }
    if (month=="july" || month=="august")
    {
        if (date<=23 || date<=22)
        {
            sign="Leo";
            return sign;
        }
    }
    if (month=="august" || month=="september")
    {
        if (date<=23 || date<=22)
        {
            sign="Virgo";
            return sign;
        }
    }
   if (month=="september" && month=="october")
    {
        if (date<=23 || date<=22)
        {
            sign="Libra";
            return sign;
        }
    }
     if (month=="october" || month=="november")
    {
        if (date<=23 || date<=21)
        {
            sign="Scorpio";
            return sign;
        }
    }    
    if (month=="november" || month=="december")
    {
        if (date<=22 || date<=21)
        {
            sign="Sagittarius";
            return sign;
        }
    }
    if (month=="december" || month=="january")
    {
        if (date<=22 || date<=19)
        {
            sign="Capricon";
            return sign;
        }
    }
     if (month=="january" || month=="february")
    {
        if (date<=20 || date<=18)
        {
            sign="Aquarius";
            return sign;
        }
    }
   if (month=="february" || month=="march")
    {
        if (date<=21 || date<=19)
        {
            sign="pisces";
            return sign;
        }
    }
}

    




























