#include<iostream>
using namespace std;


int main() {



	int a = 2;
	char b = 'V';
	float c = 3.000;
	bool e = 1;
	double f = 2.00000000000000000000000000000000;	
	string name = "vikee";

	

	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;
	cout<<typeid(c).name()<<endl;
	cout<<typeid(e).name()<<endl;
	cout<<typeid(f).name()<<endl;
	cout<<typeid(name).name()<<endl;
	

	return 0;
}
