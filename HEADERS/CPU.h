#pragma once
#include <iostream>

using namespace std;

class CPU
{
	private:
		char *name;
		double GHz;
		double price;


	public:
		CPU(const CPU &copy);
		CPU(const char* name, double GHz, double price);
		~CPU();

		void Input();
		void Print();

		const char* GetName();
		double GetGHz();
		double GetPrice();

		void Setname(const char* name);
		void SetName(const char* name);
		void SetGHz(double GHz);
		void SetPrice(double price);

};

CPU::CPU(const CPU& copy) : GHz(copy.GHz), price(copy.price)
{
	name = new char[strlen(copy.name) + 1];
	strcpy(name, copy.name);

}
CPU::CPU(const char* name, double GHz, double price) : GHz(GHz), price(price)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

CPU::~CPU()
{
	delete[] name;
}

void CPU::Input()
{
	char buff[20];
	cout << "Enter name: ";
	cin.getline(buff, 20);
	this->name = new char[strlen(buff) + 1];
	strcpy(this->name, buff);

	cout << "Enter ghz: ";
	cin >> GHz;

	cout << "Enter price: ";
	cin >> price;
}

void CPU::Print()
{
	cout << "\tName: " << name << "\n";
	cout << "\tGhz: " << GHz << "\n";
	cout << "\tPrice: " << price << "\n\n";
}

const char* CPU::GetName()
{
	return name;
}
double CPU::GetGHz()
{
	return GHz;
}
double CPU::GetPrice()
{
	return price;
}

void CPU::SetName(const char *name)
{
	if (name != nullptr)
		delete[] name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
void CPU::SetGHz(double ghz)
{
	this->GHz = ghz;
}
void CPU::SetPrice(double price)
{
	this->price = price;
}