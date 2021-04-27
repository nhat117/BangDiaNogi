#include <iostream>

using namespace std;

class Account {
    private:
        string Name;
        string Address;
        string Phone;
		CustomerId ID;
    public:
		Account ();
		Account (string Name, string Address, string Phone);

		// Setter
		void setAll (string Name, string Address, string Phone, string listitem[]);
		void setName (string Name) {this -> Name = Name;}
		void setAddress(string Address)	{this -> Address = Address;}
		void setPhone(string Phone){this -> Phone = Phone;}

		//Getter
		string getAll ();
		string getName () {return this -> Name;}
		string getAddress()	{return this -> Address;}
		string getPhone() {return this -> Phone;}
		CustomerId getId() {return this ->ID;}
};

Account :: Account (string Name, string Address, string Phone) {
	this -> Name = Name;
	this -> Address = Address;
	this -> Phone = Phone;
}

Account :: Account () {
	this -> Name = "Default";
	this -> Address = "Default";
	this -> Phone =  "0";
	this -> ID = 0;
}

void Account :: setAll (string Name, string Address, string Phone, string listitem[]) {
	this -> Name = Name;
	this -> Address = Address;
	this -> Phone = Phone;
}

