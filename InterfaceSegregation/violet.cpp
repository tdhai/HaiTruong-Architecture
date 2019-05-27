#include<conio.h>
#include<stdio.h>
#include <iostream>
using namespace std;

__interface ISmartPhone
{
	void call();
	void record();
	void Wifi();
	void takingPhoto();
	void Facebook();
};

class Iphone : ISmartPhone{}; // right because this need the function

class DeskPhone : ISmartPhone{}; //wrong because this dont need record, wifi, taking photo