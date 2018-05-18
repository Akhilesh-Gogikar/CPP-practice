#include <iostream>
#include <conio.h>

using namespace std;

class test
{
	public:
		int num;
		test (int j)
		{
			num = j;
		}
		
		test* operator ->(void)
		{
			return this;
		}
};

int main(){
	test T(5);
	test *Ptr = &T;
	
	cout << "T.num = " << T.num;
	cout << "\nPtr->num = " << Ptr -> num;
	
	cout << "\nT-> num = " << T->num;
	
	getch();
	return 0;
}
