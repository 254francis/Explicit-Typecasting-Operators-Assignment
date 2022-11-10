#include<iostream>
using namespace std;

int main()
{
int selling_Price,buying_Price,profit;

cout<<"Enter selling_Price\n";
cin>>selling_Price;
cout<<"Enter buying_Price\n";
cin>>buying_Price;
profit = (selling_Price-buying_Price);
cout<<“The profit is:"<<profit<<"\n";//output the profit
return 0;
}