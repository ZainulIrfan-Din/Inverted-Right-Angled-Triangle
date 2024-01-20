#include <iostream>

using namespace std;

int main()

{
	for (int i=1; i<=8; i++)
	{
		for (int x=1; x<=i-1; x++)
		{
			cout<<" ";
		}
		for (int y=1; y<=9-i; y++)
		{
			cout<<"#";
			
		} 
		cout<<endl;
	}
	
	return 0;
}

