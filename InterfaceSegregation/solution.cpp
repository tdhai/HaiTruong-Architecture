#include<conio.h>
#include<stdio.h>
#include <iostream>
using namespace std;

__interface ICall
{
	void call();
};

__interface IRecord
{
	void record();
};

__interface IWifi
{
	void Wifi();
};

__interface IFb
{
	void Facebook();
};

__interface ITakingPhoto
{
	void takingPhoto();
};

class Iphone : ICall, IWifi, IRecord, ITakingPhoto, IFb{};

class DeskPhone : ICall{};