#include<conio.h>
#include<stdio.h>
#include <iostream>
using namespace std;

class All{
public:
	void InputArray(int a[], int n) {
		for (int i = 0; i < n; i++) {
			cout << "Enter the number off member array a[" << i << "] : ";
			cin >> a[i];
		}
	};

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

	void OutputArray(int a[], int n) {
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
	};
};