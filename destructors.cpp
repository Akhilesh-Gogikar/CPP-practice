#include <iostream>

using namespace std;

int count=0;

class test{
	public:
		test()
		{
			count++;
			cout << "\n\nConstructor Msg: Object number" << count << "created..";
		}
		~test()
		{
			cout << "\n\nDestructor Msg: Object number" << count << "destroyed..";
			count--;
		}
};

int main()
{
	cout << "Inside the main block..";
	cout << "\n\nCreating first object T1..";
	
	test T1;
	
	{
		//Block1
		cout << "\n\nInside Block 1..";
		cout << "\n\nCreating first object T1..";
		
		test T2, T3;
		cout << "\n\nLeaving Block 1..";
	}
	
	cout << "\n\nBack inside the main block..";
	return 0;
}
