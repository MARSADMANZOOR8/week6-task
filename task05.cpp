#include <iostream>
using namespace std;
float cost(string fruit ,string day , float quantity);
main()
{
    string fruit ;
    cout << " enter the fruit you want to eat : " << endl;
    cin >> fruit ;
    string day;
    cout << " enter the day when you purchease : " << endl;
    cin >> day;
    float quantity;
    cout << " enter the number of quantity : " << endl;
    cin >> quantity;
    float result;
    result = cost( fruit , day ,  quantity);
    cout << result ;
}
float cost(string fruit ,string day , float quantity)

{
	float amount;
	if (day=="sunday")
	{
		if(fruit=="banana")
		{
			amount = 2.50 * quantity ;
			return amount;
		}
		
	}
     	
	if (day=="sunday")
	{
		if(fruit=="apple")
		{
			amount = 1.25 * quantity;
			return amount;
		}
		
	}	
		
	if (day=="sunday")
	{
		if(fruit=="orange")
		{
			amount = 0.90 * quantity;
			return amount;
		}
		
	}
	
	if (day=="sunday")
	{
		if(fruit=="grapefruit")
		{
			amount = 1.60 * quantity;
			return amount;
		}
		
	}
		
	if (day=="sunday")
	{
		if(fruit=="kiwi")
		{
			amount = 3.00 * quantity;
			return amount;
		}
		
	}
	
	if (day=="sunday")
	{
		if(fruit=="pineapple * quantity")
		{
			amount = 5.60;
			return amount;
		}
		
	}
		
	if (day=="sunday")
	{
		if(fruit=="grapes")
		{
			amount = 4.20 * quantity;
			return amount;
		}
		
	}	
	if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday" )
	{
		if(fruit=="banana")
		{
			amount = 2.50 * quantity;
			return amount;
		}
		
	}
	
     if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday" )
	{
		if(fruit=="apple")
		{
			amount = 1.20 * quantity;
			return amount;
		}
		
	}
     if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday" )
	{
		if(fruit=="orange")
		{
			amount = 0.85 * quantity;
			return amount;
		}
		
	}
     if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday" )
	{
		if(fruit=="grapefruit")
		{
			amount = 1.45 * quantity;
			return amount;
		}
		
	}
	if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday" )
	{
		if(fruit=="kiwi")
		{
			amount = 2.70 * quantity;
			return amount;
		}
		
	}
		if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday" )
	{
		if(fruit=="pineapple")
		{
			amount = 5.50 * quantity;
			return amount;
		}
		
	}
	if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday" )
	{
		if(fruit=="grapes")
		{
			amount = 3.85 * quantity;
			return amount;
		}
		
    }
}
