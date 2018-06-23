#include"IntegerNumber.h"
#include<iostream>

using namespace std;

IntegerNumber::IntegerNumber(int a):integernumber(a),RealNumber(a){}
void IntegerNumber::print(){
	cout<<"integernumber1 add integernumber2 is :"<<addnumber<<endl;
	cout<<"integernumber1 mul integernumber2 is :"<<mulnumber<<endl;
}
double IntegerNumber::getnumber(){
	return double(integernumber);}
void IntegerNumber::add(AbstractNumber *other){
	addnumber=integernumber+other->getnumber();}
void IntegerNumber::mul(AbstractNumber *other){
	mulnumber=integernumber*other->getnumber();}

