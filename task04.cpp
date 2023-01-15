#include <iostream>
using namespace std;
string  information(int speed );
main()
{
int speed ;
cout << " enter  the speed " << endl ;
cin >> speed;
string result;
result = information(speed);
cout << " the speed information is " << result << endl;
}
string  information(int speed )
{
    string inform;
    if (speed < 50)
    {
         inform = "slow ";
    return inform;
    }

    if (speed > 100 && speed < 150)
    {
         inform = "average";
    return inform;
    }
     if (speed > 150 && speed <500)
    {
         inform = "fast ";
    return inform;
    }
     if (speed > 500 && speed < 1000)
    {
         inform = "extremelyfast ";
    return inform;
    }
}
