#include <string>
#include <iostream>
#include "C:\Users\mrham\OneDrive\Desktop\New folder (2)\approject\headers\seed.h"
#include <windows.h>
#include <conio.h>

using namespace std;


void runseeder(){
	seed seeder;
}




void menu() {
	system("Color F0");
	cout << "\t\t\t\t" << "super market billing" << endl << "\t\t\t" << "===================================" << "\n\t\t\t" << "1.bill report" << "\n\t\t\t" << "2.add/remove/edit item" << "\n\t\t\t"
		<< "3.show item details" << "\n\t\t\t" << "4.exit"<<endl<< "\t\t\t";

}



int main()
{
	int end = 0, repeat = 0,exit=0;
	char a,s;
	

	


	while (end == 0) {
		
		if (exit == 1) {

			return 0;
		}
		repeat = 0;
		

		while (repeat == 0) {
			system("CLS");
			a = '0';
			menu();

			cin >> a;

			system("CLS");

			switch (a)
			{
			case '1':
				cout << "enter your id (between 14 to 16)"<<endl;
				runseeder();
				_getch();
				break;
			case '2':
				cout << "enter your id (between 1 to 13)"<<endl;
				runseeder();
				_getch();
				break;
			case '3':
				system("CLS");
				cout << "enter your id (between 1 to 16):"<<endl;
				runseeder();
				_getch();
				break;
			case '4':
				repeat = 1;
				exit = 1;
				break;
			default:
				cout << "\t\t\t\t********undefined input********"<<"\n\t\t\t\t"<<"press any key to continue";
				s=_getch();
				break;
			}
			
		}
	}







}

