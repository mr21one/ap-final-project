#pragma once
#include "C:\Users\mrham\OneDrive\Desktop\New folder (2)\approject\headers\supermarket.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;


class seed
{
public:
	seed();
	~seed();
	
private:

};

seed::seed()
{
	int j = 1, i = 0,k,t,s,z,q;
	cin >> k;
	if (k < 17 && k > 0) {

		items st_1;
		bill st_2;
		vector<string> streeng_1;
		string line_1;
		ifstream myfile_1("date.txt");
		if (myfile_1.is_open())
		{

			vector<int> arr;
			ifstream File;
			File.open("into.txt");
			int n;
			while (File >> n) {
				arr.push_back(n);

			}
			q = k - 1;
			if (k > 13) {
				st_2.iteems = arr[q];
			}
			else {
				st_1.setprice(arr[q]);
			}
			File.close();
		}

			while (getline(myfile_1, line_1))
			{

				streeng_1.push_back(line_1);


			}
			t = k - 1;
			s = 12 + k;
			if (k > 13) {
				z = k + 12;

				st_2.setdate(streeng_1[z]);
				cout << "date:"<<st_2.getdate() << endl;
				cout << "id:" << k<<endl;
				
				int b,m,h,o;
				b =  (st_2.iteems / 100);
				m = (st_2.iteems / 10);
				h = st_2.iteems - (m * 10);
				o = m - (b * 10);
				cout <<"date:"<<streeng_1[b-1] <<"\t"<<"date:" << streeng_1[h - 1] <<"\t"<<"date:" << streeng_1[o - 1]<<endl;
				cout <<"name:"<<"\t"<<streeng_1[b+12] << "\t" << "name:" << "\t" << streeng_1[h + 12] << "\t" << "name:" << "\t" << streeng_1[o + 12]<<endl;
				cout <<"id:" <<b << "\t" <<"id:" <<h << "\t" <<"id:" <<o<<endl;
					


				


			}
			else {
				st_1.setdate(streeng_1[t]);
				st_1.setname(streeng_1[s]);
				st_1.setid(k);
				cout<<"date:"<<st_1.getdate()<<endl;
				cout<<"name:"<<st_1.getname()<<endl;
				cout<<"id:"<<st_1.getid()<<endl;
				cout << "price:" << st_1.getprice()<<"$"<<endl;

			}







			myfile_1.close();


	}

	else {
		cout << "//////error-------wrong input///////";

	}
		


}


seed::~seed()
{
}
