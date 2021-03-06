#include <iostream>

using namespace std;

class Customer {
    private:
        string Name;
        string Address;
        string Phone;
		string ID;
		item List[];
    public:
		Customer ();
		Customer (string Name, string Address, string Phone);

		// Setter
		void setAll (string Name, string Address, string Phone, string ID, item
		 Item[]);
		void setName (string Name) {this -> Name = Name;}
		void setAddress(string Address)	{this -> Address = Address;}
		void setPhone(string Phone){this -> Phone = Phone;}

		//Getter
		string getName () {return this -> Name;}
		string getAddress()	{return this -> Address;}
		string getPhone() {return this -> Phone;}
		string getId() {return this ->ID;}
		 
		//Class Methode

};

Customer :: Customer (string Name, string Address, string Phone) {
	this -> Name = Name;
	this -> Address = Address;
	this -> Phone = Phone;
}

Customer :: Customer () {
	this -> Name = "Default";
	this -> Address = "Default";
	this -> Phone =  "0";
	this -> ID = "C000";
}

void Customer :: setAll (string Name, string Address, string Phone, string ID, item ListItem[]) {
	this -> Name = Name;
	this -> Address = Address;
	this -> Phone = Phone;
	this -> ID = ID;
}

class Guest : public Customer {
	private :
		int point;
		string rank = "Guest";
		int NumberofItem;
	public :
		Guest ();
		Guest (string Name, string Address, string Phone, string ID);

		//Setter
		void setAll (string Name, string Address, string Phone, string ID, item ItemName, int NumberofItem);

		//Getter
		string getName () {return this -> getName();}
		string getAddress()	{return this -> getAddress();}
		string getPhone() {return this -> getPhone();}
		string getId() {return this -> getId();}
		string getRank() {return this -> rank;}
		int getNumberofItem () {return this -> NumberofItem;}
};

void Guest :: setAll (string Name, string Address, string Phone, string ID, item ItemName, int NumberofItem) {
	
}
