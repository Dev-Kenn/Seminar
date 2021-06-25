#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x, ans;
	
	cout<< "Enter number of registrants: ";
	cin>> x;
	
	if (x < 5)
	{
		ans = x * 500;
		cout<< "Total company owes for a seminar is: " <<ans<<endl;		
	}
	else if (x > 5 && x <=10)
	{
		ans = x * 400;
		cout<< "Total company owes for a seminar is: " <<ans<<endl;
	}
	else
	{
		ans = x * 300;
		cout<< "Total company owes for a seminar is: " <<ans<<endl;
	}
	return 0;
}
