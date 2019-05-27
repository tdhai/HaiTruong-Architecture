#include<conio.h>
#include<stdio.h>
#include <iostream>
using namespace std;

class Adult{
public:
	char Sleeping;
	char Eating;
	virtual char Working(){};
};

class Children : public Adult{}; 

//tách ra một interface riêng biệt để khi kế thừa cần dùng ta chỉ cần gọi mà k ảnh hưởng đến các
//lớp kế thừa khác
class Older : public Adult { 
public:
	char Working(){
	
	};
};