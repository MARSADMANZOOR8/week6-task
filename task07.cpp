#include <iostream>
using namespace std ;
float cost(string city , string product , int quantity);
main()
{
    string city;
    cout << " enter the name of the city :" << endl;
    cin >> city;
    string product;
    cout << " enter the name of the product :" << endl;
    cin >> product;
    int quantity;
    cout << " enter the number of products :" << endl;
    cin >> quantity;
    float result ;
    result = cost(city , product ,quantity);
    cout << " the total amount the you have to give : " << result;
}
float cost(string city , string product , int quantity)
{
    float total;
   if (city=="sofia" && product =="coffee")
   {
    total = 0.50 * quantity;
    return total;
   }
  else if (city=="sofia" && product =="water")
   {
    total = 0.80 * quantity;
    return total;
   }
   else if (city=="sofia" && product =="beer")
   {
    total = 1.20 * quantity;
    return total;
   }
   else if (city=="sofia" && product =="sweets")
   {
    total = 1.45 * quantity;
    return total;
   }
    else if (city=="sofia" && product =="peanuts")
   {
    total = 1.60 * quantity;
    return total;
   }
    else if (city=="piovdiv" && product =="coffee")
   {
    total = 0.40 * quantity;
    return total;
   }
    else if (city=="piovdiv" && product =="water")
   {
    total = 0.70 * quantity;
    return total;
   }
    else if (city=="piovdiv" && product =="beer")
   {
    total = 1.15 * quantity;
    return total;
   }
   else if (city=="piovdiv" && product =="sweets")
   {
    total = 1.30 * quantity;
    return total;
   }
   else if (city=="piovdic" && product =="peanuts")
   {
    total = 1.50 * quantity;
    return total;
   }
   else if (city=="varna" && product =="coffee")
   {
    total = 0.45 * quantity;
    return total;
   }
    else if (city=="varna" && product =="water")
   {
    total = 0.70 * quantity;
    return total;
   }
    else if (city=="varna" && product =="beer")
   {
    total = 1.10 * quantity;
    return total;
   }
    else if (city=="varna" && product =="sweets")
   {
    total = 1.35 * quantity;
    return total;
   }
    else if (city=="varna" && product =="peanuts")
   {
    total = 1.55 * quantity;
    return total;
   }
}
