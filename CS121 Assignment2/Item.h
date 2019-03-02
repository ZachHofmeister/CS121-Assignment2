#pragma once
#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item { //Represents an item in the store.
	private:
		//Private data members
		string name;
		int id, amount;
		double price;
	public:
		//Constructors
		Item(); //Default constructor so that it is easier to initialize an array of Items without setting values.
		Item(string, int, double, int); //Overloaded constructor sets all values for Items.
		//Getters
		string getName();
		int getID();
		double getPrice();
		int getAmount();
		//Setters
		void setAmount(int a);
};

Item::Item() { //Default constructor

}

Item::Item(string n, int i, double p, int a) { //Constructor
	name = n;
	id = i;
	price = p;
	amount = a;
}

string Item::getName() {
	return name;
}

int Item::getID() {
	return id;
}

double Item::getPrice() {
	return price;
}

int Item::getAmount() {
	return amount;
}

void Item::setAmount(int a) {
	amount = a;
}

#endif
