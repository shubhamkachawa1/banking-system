

#include<iostream>
#include <string>
/*#include </storage/emulated/0/Extra h fils/mem.h>
#include </storage/emulated/0/Extra h fils/WINDOWS.H>
#include </storage/emulated/0/Extra h fils/graphics.h>*/
using namespace std;

int main()
{
	string *str=new(string);
	cin>>*str;
	cout<<*str;
	delete[] str;
	//string *str=new(string);
	cin>>*str;
	cout<<*str;

	
	return 0;
}
