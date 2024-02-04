#include <iostream>
using namespace std;

int main() {

	char vowel;
	cout<<"Check Char is Vowel : ";

	cin>>vowel;

	switch (vowel) {

	case 'a' :
		cout<<"a is Vowel"<<endl;
		break;
	case 'e':
		cout<<"e is vowel"<<endl;
		break;

	case 'i':
		cout<<"i is vowel"<<endl;
		break;

	case 'o':
		cout<<"o is vowel"<<endl;
		break;

	case 'u':
		cout<<"o is vowel"<<endl;
		break;

	default:
		cout<<"Consonants"<<endl;
		break;
	}
	return 0;
}
