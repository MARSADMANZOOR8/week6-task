#include<iostream>
using namespace std;
main()
{
string name;
cout << " enter the student name : " << endl;
cin >> name ;
int english;
cout << " enter your english marks: " << endl;
cin >> english;
int mathematics;
cout << "enter your mathematics :" << endl;
cin >> mathematics;
int chemistry;
cout << "enter your chemistry marks :" << endl;
cin >> chemistry;
int social_science;
cout << "enter your social science marks : " << endl;
cin >> social_science;
int biology;
cout << "enter your biology marks : " << endl;
cin >> biology;
int total;
total=500;
cout << " the total marks is equal to : " << total << endl;
int percentage;
percentage = (english + mathematics + chemistry + social_science + biology ) / 5;
cout << " the percentage of the student is : " << percentage << endl;
if (percentage >= 90 && percentage <= 100)
{
    
    cout << "the grade of the student is : " << "A+" << endl;
}
 if (percentage >= 80 && percentage <= 90)
 {
    cout << "the grade of the student is : " << "A" << endl;
 }
 if (percentage >= 70 && percentage <= 80)
 {
    cout << "the grade of the student is : " << "B+" << endl;
 }
 if (percentage >= 60 && percentage <= 70)
 {
    cout << "the grade of the student is : " << "B" << endl;
 }
 if (percentage >= 50 && percentage <= 60)
 {
    cout << "the grade of the student is : " << "C" << endl;
 }
 if (percentage >= 40 && percentage <= 50)
 {
    cout << "the grade of the student is : " << "D" << endl;
 }
 if (percentage ==40)
 {
    cout << " the grade of the student is : " << "f" << endl;
 }
}