#include"RealNumber.h"
#include"IntegerNumber.h"
#include"ComplexNumber.h"
#include"AbstractNumber.h"

#include<iostream>
using namespace std;
int main(){
	AbstractNumber *a1=new RealNumber(3.57);
	AbstractNumber *a2=new RealNumber(8.45);
	AbstractNumber *a3=new ComplexNumber(3,4.34);
	AbstractNumber *a4=new ComplexNumber(5.72,6);
	 AbstractNumber *a5=new IntegerNumber(68);
	 AbstractNumber *a6=new IntegerNumber(546);

	a1->add(a2);
	a1->mul(a2);
	a3->add(a4);
	a3->mul(a4);
	a5->add(a6);
	a5->mul(a6);
	a1->print();
	a3->print();
	a5->print();
	return 0;
}
