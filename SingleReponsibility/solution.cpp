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
	};
};
class Max{
public:
	int MaxArray(int a[], int n){
		int max = 1;
		for (int i = 0; i < n; i++){
			if (a[i]>max)
			{
				max = a[i];
			}
		}
		return max;
	}
};
class Min{
public:
	int MinArray(int a[], int n){
		int min = 1;
		for (int i = 0; i < n; i++){
			if (a[i]>min)
			{
				min = a[i];
			}
		}
		return min;
	}
};
class Output{
	public:
		void OutputArray(int a[], int n) {
			for (int i = 0; i < n; i++)
				cout << a[i] << " ";
		};
};