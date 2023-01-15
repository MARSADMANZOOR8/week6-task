#include <iostream>
using namespace std;
float money(string category , int number, float budget  );
main()
{
    int number;
    cout << " enter the numbers of the people " << endl ;
    cin >> number;
    string category;
    cout << " enter the category people wanted " << endl ;
    cin >> category;
    float budget;
    cout << " enter the total amount of the budget people have " << endl;
    cin >> budget;
    float result;
    result = money( category ,  number  , budget);
    if (result > 0)
    {
      cout << " yes! " << "you have " << result <<"money left"<< endl ; 
    } 
    else 
    {
        cout << " not enough money ! " << (-1)*result <<" money needed" << endl;
    }
    
}
 float money(string category , int number,float budget)
 {
        float amount; 
        if (category=="vip")
        {
            if (number>=1 && number<=4)
            {
              amount = budget - (499.99*number)-(budget*0.75);
               return amount;
            }
            
        }
        
        if (category=="vip")
        {
            if (number>=5 && number<=9)
            {
              amount = budget - (499.99*number)-(budget*0.60);
               return amount;
            }
            
        }
         
        if (category=="vip")
        {
            if (number>=10 && number<=24)
            {
              amount = budget - (499.99*number)-(budget*0.50);
               return amount;
            }
            
        }
           
        if (category=="vip")
        {
            if (number>=25 && number<=49)
            {
              amount = budget - (499.99*number)-(budget*0.40);
               return amount;
            }
            
        }
          
        if (category=="vip")
        {
            if (number>=50)
            {
              amount = budget - (499.99*number)-(budget*0.25);
               return amount;
            }
            
        }
          
        if (category=="normal")
        {
            if (number>=1 && number<=4)
            {
              amount = budget - (249.99*number)-(budget*0.75);
               return amount;
            }
            
        }
           
          if (category=="normal")
        {
             if (number>=5 && number<=9)
            {
              amount = budget - (249.99*number)-(budget*0.60);
               return amount;
            }
        }   
                
          if (category=="normal")
        {
             if (number>=10 && number<=24)
            {
              amount = budget - (249.99*number)-(budget*0.50);
               return amount;
            }
        }     
          
          if (category=="normal")
        {
             if (number>=25 && number<=49)
            {
              amount = budget - (249.99*number)-(budget*0.40);
               return amount;
            }
        }     
          
          if (category=="normal")
        {
             if (number>=50)
            {
              amount = budget - (249.99*number)-(budget*0.25);
               return amount;
            }
        }     
         
 }