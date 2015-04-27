//============================================================================
// Name        : ExamineObjecgt.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

class Item{
public:
	int i;
	int j;
};
class transaction{
private:
	bool bValid;
	char *buf;
	int len;
	Item item;
	Item *pitem;
public:
	transaction(){
		bValid =true;
		len = 0;
		buf =0;
		item.i = 100;
		item.j = 12;
		pitem = new Item();

	}
	void fillBuffer(char *pbuf, char len){
		buf = new char [len];
		memcpy(buf, pbuf, len);
		this->len = len;
	}
	char *getBuf(){
		return buf;
	}
};
void fun3(class transaction *obj){

	printf("%s\n", obj->getBuf());

}
void fun1(){
	class transaction *obj = new transaction();
	char *mybuf="this is my string";
	obj->fillBuffer(mybuf,strlen(mybuf)+1);
	fun3(obj);
	return;
}


int main() {
	fun1();
	return 0;
}
