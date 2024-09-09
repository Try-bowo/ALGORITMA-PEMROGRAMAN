#include<iostream>

using namespace std;

int main()
{
	//perulangan do while
	
	int i=1;
	
	for(i=1;i<=10;i++){
		if(i%2==0){
			cout << i << " = Bilangan Genap" <<endl;
		}else{
			cout << i << " = Bilangan Ganjil" << endl;
		}
	}


	return 0;
}
