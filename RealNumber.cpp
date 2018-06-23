#include"RealNumber.h"

using namespace std;

RealNumber::RealNumber(double a):realnumber(a){}
double  RealNumber::getnumber(){
	return realnumber;}

void RealNumber::print(){
	cout<<"realnumber1 add realnumber2 is "<<addnumber<<endl;
	cout<<"realnumber1 mul realnumber2 is "<<mulnumber<<endl;}


void RealNumber::add(AbstractNumber *other){
	addnumber=realnumber+other->getnumber();}
void RealNumber::mul(AbstractNumber *other){
	mulnumber=realnumber*other->getnumber();}
