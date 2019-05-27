#include<conio.h>
#include<stdio.h>
#include <iostream>
using namespace std;

class Input{
public:
	void InputArray(int a[], int n) {
		for (int i = 0; i < n; i++) {
			cout << "Enter the number off member array a[" << i << "] : ";
			cin >> a[i];
		}
	}
};

class Output{
public:
	void OutputArray(int a[], int n) {
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
	}
};

class  Sum{
public:
	void SumOver5(int a[], int n){
		int sum = 0;
		for (int i = 0; i < n; i++){
			sum += a[i];
		}
	}
};

class  SumOver_5{
public:
	void SumOver5(int a[], int n){
		int sum = 0;
		for (int i = 0; i < n; i++){
			continue;
			if (a[i] > 5){
				sum += a[i];
			}
		}
	}
};