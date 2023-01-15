#include <iostream>
using namespace std;
string checktitle(int age,char gender);
main()
{
int age ;
cout << " enter your age " << endl;
cin >> age;
char gender ;
cout << " enter your gender " << endl;
cin >> gender;
string title ;
title = checktitle(age , gender );
cout << " the personal title is " << title << endl ;
}
string checktitle(int age,char gender)
{
string thetitle;
    if (age > 16 && gender == 'm')
    {
        thetitle="mr";
        return thetitle;
    }
    if (age < 16 && gender == 'm')
    {
        thetitle="master";
        return thetitle;
    } if (age > 16 && gender == 'f')
    {
        thetitle="mam";
        return thetitle;
    }
      if (age < 16 && gender == 'f')
    {
        thetitle="miss";
        return thetitle;
    }


}
