# include <iostream>
using namespace std ;
char  marks(int numbers); 
main()
{ 
    int numbers ;
    cout << " enter your numbers " << endl;
    cin >> numbers ;
    char grade ;
    grade = marks (numbers);
    cout << grade ;
char  marks(int numbers)
  char grad;
  if (numbers < 50)
{
    grad = 'f'; 
   
}
 
 if (numbers => 50 && numbers <60 )
{
    grad = 'e'; 
   
} 
if (numbers =>  60 && number <70 )
{
    grad = 'd'; 
   
}
return grad;

} 