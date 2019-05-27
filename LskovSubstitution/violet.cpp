#include<conio.h>
#include<stdio.h>
#include <iostream>
using namespace std;

class Adult{
public:
	char Sleeping;
	char Working;
	char Eating;
};

class Children : public Adult{}; //Children do not work

class Older : public Adult {};