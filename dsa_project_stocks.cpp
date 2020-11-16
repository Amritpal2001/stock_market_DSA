#include <iostream>
#include "implementation.h"
using namespace std;
int main()
{
	system("clear");
	stocks st;

	while(true)
	{
		system("clear");
		cout<<endl;
		cout<<"\t\t\t\t\t\t\t****************************************"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t*  Press 1 to buy stocks               *"<<endl;
		cout<<"\t\t\t\t\t\t\t*  Press 2 to sell stocks              *"<<endl;
		cout<<"\t\t\t\t\t\t\t*  Press 3 to get total capital gain   *"<<endl;
		cout<<"\t\t\t\t\t\t\t*  Press 4 to exit                     *"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t****************************************"<<endl;
		cout<<endl<<"Enter a choice"<<endl;
		int x;
		cin>>x;
		
		switch(x)
		{
			case 1:
			{
				st.buy_stocks();
				cin.get();
				cin.get();
				break;
			}
			case 2:
			{
				st.sell_stocks();
				cin.get();
				cin.get();
				break;
			}
			case 3:
			{
				cout<<"$ "<<st.get_total_capital_gain()<<endl;
				cin.get();
				cin.get();
				break;
			}
			case 4:
				return 0;

			default:
				cout<<"Enter valid choice"<<endl;
				cin.get();
				cin.get();
		}
	}
	
	return 0;
}