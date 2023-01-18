#include<iostream>
using namespace std;
main()
{
	
    int start_hours;
    cout << "enter the hours when the exam starts : " ;
    cin >> start_hours;
    int start_minutes;
    cout << "enter the minutes when the exam starts : " ;
    cin >> start_minutes;
    int arrival_hours;
    cout << "enter the hours when the student arrived : " ;
    cin >> arrival_hours;
    int arrival_minutes;
    cout << "enter the minutes when the student arrived : " ;
    cin >> arrival_minutes;
    int start_time;
    start_time = (start_hours*60) + start_minutes ;
    int arrival_time ;
    arrival_time = (arrival_hours*60) + arrival_minutes ;
    int difference;
    difference = arrival_time-start_time ;
    int hours=0;

	if (difference<-59)
	    {
	    	difference = difference + 60;
	    	hours = hours + 1;
	    	cout << hours << ":" << (-1)*difference << "before the start of the exam " << endl;
		
	   }
	   else
	   {
	   	cout <<(-1)* difference << " minutes " << "before the start of the exam " << endl ; 
	   	
	   }
	   	if (difference>59)
	    {
	    	difference = difference - 60;
	    	hours = hours + 1;
	    	cout << hours << ":" << difference << "after the start of the exam " << endl;
		
	   }
	   else
	   {
	   	cout << difference << " minutes " << "after the start of the exam " << endl ; 
	   	
	   }
	
	}
