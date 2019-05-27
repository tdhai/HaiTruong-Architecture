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

//Now we want to addition sum the number over 5 but we addition function in class SumAndSumOver5

class  SumAndSumOver5{
public:
	void SumOver5(int a[], int n){
		int sum1 = 0;
		int sum2 = 0;
		for (int i = 0; i < n; i++){
			sum1 += a[i];
			continue;
			if (a[i] > 5){
				sum2 += a[i];
			}
		}
	}
};