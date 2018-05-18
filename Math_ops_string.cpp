#include <cstring>
#include <iostream>

using namespace std;

class string
{
	char *p;
	int len;
	public:
		string() {
			len = 0;
			p = 0;
		}
		
		string(const char * s);
		string(const string & s);
		
		~ string(){
			delete p;
		}
		
		// + operator 
		friend string operator+(const string &s, const string &t);
		
		// <= operator
		friend int operator <= (const string &s, const string &t);
		friend void show(const string s);
		
		string :: string(const char *s);
		{
			len = strlen(s);
			p = new char[len+1];
			strcpy(p,s);
		}
		
		string :: string(const string & s)
		{
			len = s.len;
			p = new char[len+1];
			strcpy(p,s.p);
		}
		
		string operator+(const string &s, const string &t)
		{
			string temp;
			temp.len = s.len + t.len;
			temp.p = new char[temp.len + 1];
			strcpy(temp.p, s.p);
			strcat(temp.p, t.p);
			return(temp);
		}
		
		int operator<=(const string &s, const string &t)
		{
			int m = strlen(s.p);
			int n = strlen(t.p);
			
			if(m<=n) return(1);
			
			else return(0);
		}
		
		void show(const string s)
		{
			cout << s.p;
		}
		
		int main()
		{
			string s1 = "New ";
			string s2 = "York ";
			string s3 = "Delhi";
			string string1, string2, string3;
			string1 = s1;
			string2 = s2;
			string3 = s3;
			
			cout << "\nstring1 = "; show(string1);
			cout << "\nstring2 = "; show(string2);
			cout << "\n";
			cout << "\nstring3 = "; show(string3);
			
			cout << "\n\n";
			if(string1 <= string3)
			{
				show(string1);
				cout << " smaller than ";
				show(string3);
				cout << "\n";
			}
			
			return 0;
		}
}
