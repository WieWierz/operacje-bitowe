#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char** argv) {
	
	int a,b;
	
	cout<<"Podaj a: ";
	cin>>a;
	cout<<"Podaj b: ";
	cin>>b;

	cout<<"a: "<<a<<"("<< bitset<8>(a)<<")"<<endl;
	cout<<"b: "<<b<<"("<< bitset<8>(b)<<")"<<endl;
	
	cout<<"a^b:"<<(a^b)<<"("<<bitset<8>(a^b)<<")"<<endl;
	cout<<"a|b:"<<(a|b)<<"("<<bitset<8>(a|b)<<")"<<endl;
	cout<<"a&b:"<<(a&b)<<"("<<bitset<8>(a&b)<<")"<<endl;
	cout<<"~a:("<<bitset<8>(~a)<<")"<<endl;
	cout<<"~b:("<<bitset<8>(~b)<<")"<<endl;
	cout<<"a <<=1:("<<bitset<8>(a <<=1)<<")"<<endl;
	cout<<"b >>=1:("<<bitset<8>(b >>=1)<<")"<<endl;
	return 0;
}
