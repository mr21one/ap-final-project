#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class supermarket
{

public:
	
	supermarket();
	~supermarket();



	void setprice(int price) {

		this->price = price;
	}
	// Getter
	int getprice() {
		return this->price;
	}



	void setdate(string date) {

		this->date = date;
	}
	// Getter
	string getdate() {
		return this->date;
	}


	void setid(int id) {

		this->id = id;
	}
	// Getter
	int getid() {
		return this->id;
	}




private:

	int price;
	int id;
	string date;



};

supermarket::supermarket()
{
}

supermarket::~supermarket()
{
}









class items :  public supermarket
{
public:
	items();
	~items();
	void setname(string name) {

		this->name = name;
	}
	// Getter
	string getname() {
		return this->name;
	}

private:
	string name;
	enum type
	{


	};

};

items::items()
{
}

items::~items()
{
}





class bill : public supermarket
{
public:
	bill();
	~bill();
	int iteems;
	
	
	

private:

};

bill::bill()
{
}

bill::~bill()
{
}
