//sizeof()
//comma
//dot and arrow
//casting
//&addresss
//*pointer 



#include<iostream>
using namespace std;

int main() {

    int a = 4;
    cout<<sizeof(a)<<endl;  //4 byte

    char name = 'v';
    cout<<sizeof(name) <<endl;  //1 byte

    bool flag;
    a==name? flag = true : flag = false;
    cout<<flag<<endl;

    cout<<(&a)<<endl;  //memory address


}
