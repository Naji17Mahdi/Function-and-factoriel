#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

unsigned long fact ( unsigned int n )
{
	unsigned long f = 1;
	for ( int i = 1 ; i <= n ; i++ )
	  f = f * i;
	return f;  
}
main()
{
	unsigned int n;
	
	cout<<"PLease enter a number:"<<endl;
	cin>>n;
	
	unsigned long y;
	y = fact ( n );
	cout<<"Fact = "<<y;
	
}
