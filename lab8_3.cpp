#include<iostream>
using namespace std;

char before(char x)
{
	if( 'A' < x )
	{
		return x-1;
	}
	if( 'Z' == x )
	{
		return x+1;
	}
	if( 'A' == x )
	{
		return 'Z';
	}
	if( 'A' > x )
	{
		return 0;
	}
	if ( 'Z' < x)
	{
		return 0;
	}
	
}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
