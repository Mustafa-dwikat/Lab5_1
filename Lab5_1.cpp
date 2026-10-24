#include <iostream>
using namespace std; 
int main() {
	int notebook, price_n, price_p, total;
	cout << "pls enter the number of the notebooks : ";
	cin >> notebook;
	cout << "pls enter the price of each notebook : ";
	cin >> price_n;
	cout << "pls enter the total price of the pens : ";
	cin >> price_p;
	total = (notebook * price_n) + price_p;
	cout << "your bill is : " << total << " $";



}