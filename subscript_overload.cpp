#include <iohnstream>
#include <conio.h>

using namespace std;

class arr{
	int a[5];
	public:
		arr(int *s)
		{
			int i;
			for(i=0; i<5;i++){
				a[i]=s[i];
			}
			int operator [] (int k)
			{
				return (a(k));
			}
		}
};

int main(){
	int x[5] = {1,2,3,4,5};
	arr A[x];
	int i;
	for(i=0;i<5;i++){
		cout << x[i] << "\t";
	}
	
	getch();
	return 0;
}
