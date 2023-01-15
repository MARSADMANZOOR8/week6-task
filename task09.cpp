#include <iostream>
using namespace std;
float output( string year_type , int p , int h  );
main()
{
string year_type;
cout << " enter the type of year  : " << endl;
cin >> year_type;
int p;
cout << "the number of the  holidays in an year :" << endl;
cin >> p;
int  h;
cout << " enter the number of weekends in which vladimir travels to his hometown :" << endl;
cin >> h;
float result ;
result =  output(  year_type ,  p ,  h  );
cout << result ;
}
float output( string year_type , int p , int h )
{

    float result;
    
    
   
     result = (2 * p / 3 ) + h + ((48-h )* 3 / 4);
     if (year_type=="normal")
     {
     return result; 
     }  
   
    if (year_type=="leap")
   {
       return result+(result*0.15);
   }
   return 0;
   
}
