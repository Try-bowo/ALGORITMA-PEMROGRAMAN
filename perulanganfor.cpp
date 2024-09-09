#include<iostream>

using namespace std;

int main()
{
	
//	// perulangan for pada C++
//	int i;
//	
//	for(i=0;i<=9;i++)
//	{
//		cout<<i<<endl;
//	}

	// perulangan for bertumpuk pada C++
	int i, j;
	
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=4;j++)
		{
			cout << i << "," << j << endl;
		}
	}	
	
	return 0;
}
