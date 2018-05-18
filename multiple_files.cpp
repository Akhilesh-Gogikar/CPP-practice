#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("country");
	
	fout << "United States of America\n";
	fout << "United Kingdom\n";
	fout << "South Korea\n";
	
	fout.close();
	
	fout.open("capital");
	
	fout << "Washington\n";
	fout << "London\n";
	fout << "Seoul\n";
	
	fout.close();
	
	const int N = 80;
	char line[N];
	
	ifstream fin;
	fin.open("country");
	
	cout << "contents of country file: \n";
	
	while(fin)
	{
		fin.getline(line, N);
		cout << line << endl;
	}
	
	fin.close();
	fin.open("capital");
	
	cout << "\n Contents of capital file \n";
	
	while(fin)
	{
		fin.getline(line, N);
		cout << line << endl;
	}
	
	fin.close();
	
	return 0;
}
