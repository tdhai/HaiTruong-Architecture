#include<conio.h>
#include<stdio.h>
#include <iostream>
using namespace std;

__interface IMotocycle
{
public:
	int HaveRun(){};
};

class yamaha : IMotocycle{
	int HaveRun(){
		int wheels = 2;
	}
};

class toyota : IMotocycle{ //now the car run 
	int HaveRun(){
		int wheels = 4;
	}
}; 