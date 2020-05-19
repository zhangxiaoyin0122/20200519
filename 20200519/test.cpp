#include <iostream>
#include <assert.h>
#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
using namespace std;

class A {
	double _a;//8
	char _b;//9
	int _c;//16
	char _d;//17
	//24
	class B {
		int _e;
		char _f;
		double _g;
	};
	B b;
};

class Date {
public:
	/*Ĭ�Ϲ��캯�� : (����ֻ�ܴ���һ��)
		1.������Ĭ������;
		2.��ʾ������޲ι���
		3.ȫȱʡ���캯��.*/
	/*Date() {

	}*/
	Date(int year=2020, int month=5, int day=19) {
		_year = year;
		_month = month;
		_day = day;
	}
	void DatePrint() {
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	}
	void SetDate(int year, int month, int day) {
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	int _day;
};

void test() {
	cout << sizeof(A) << endl;
}

typedef int DataType;
class Seqlist {
public:
	Seqlist(int capacity = 10) {
		this->_pData = (DataType*)malloc(capacity * sizeof(DataType));
		assert(this->_pData);
		this->_size = 0;
		this->_capacity = capacity;
	}
	~Seqlist() {
		if (this->_pData) {
			free(this->_pData);//�ͷŶ��ϵĿռ�
			this->_pData = NULL;//��ָ����Ϊ��
			this->_size = 0;
			this->_capacity = 0;
		}
	}

private:
	int* _pData;
	size_t _size;
	size_t _capacity;
};
class String {
	String(const char* str = "jack") {
		this->_str = (char*)malloc(strlen(str) + 1);
		strcpy(this->_str, str);
	}
	~String() {
		cout << "~String()" << endl;
		free(this->_str);
	}
private:
	char* _str;
};
class Person {
private:
	String _name;
	int _age;
};
int main() {
	//Date d1;
	//////d1.SetDate(2020, 5, 20);
	//d1.DatePrint();
	//test();
	Person p;
	return 0;
}