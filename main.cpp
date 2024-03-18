#include <iostream>
using namespace std;
int main()
{
double merchandiseCost , employeeSalary , storeRent , electricityCost , desiredProfit ;

cout << "Enter total cost of the merchandise:";
cin >> merchandiseCost;
cout << "Enter yearly salary of the employee and employer:";
cin >> employeeSalary;
cout << "Enter store yearly rent:";
cin >> storeRent ;
cout << "Enter the estimated electricity cost:";
cin >> electricityCost ;
desiredProfit=0.1;

double expenses = merchandiseCost + employeeSalary + storeRent + electricityCost ;
double profit =expenses + expenses * 0.1;
double afterSale = profit /(0.85);
double Markup =afterSale - expenses;

cout << "Merchandise must be approximately marked up by:"
<< Markup << endl;

return 0;



}
