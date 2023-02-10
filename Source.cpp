#include <iostream>
#include "HEADERS/CPU.h"
#include "HEADERS/HDD.h"
#include "HEADERS/VideoCard.h"
#include "HEADERS/RAM.h"
#include "HEADERS/Laptop.h"
using namespace std;

int main()
{
	setlocale(0, "");
	VideoCard obj1("Radeon RX 580", 12, 30000);
	CPU obj2("Intel Core i5", 3.9, 12000);
	RAM obj3("Kingston", 32, 5500);
	HDD obj4("Asus", 512, 5500);
	Laptop laptop("MSI", obj1, obj2, obj3, obj4);
	laptop.Print();
}