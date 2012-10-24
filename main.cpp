//Overriding the output operator ("<<")

#include <iostream>
#include <string>

using namespace std;

class User {
	string name;
	int age;
public:
	User ( string str, int yy ) { name = str; age = yy; }
	friend ostream& operator<<(ostream& os, const User& user) {
		os << "Name: " << user.name << " Age: " << user.age << endl;
		return os;
	}
};

int main()
{
	User us( "Zaphod", 119 );
	cout << us << endl;
	cin.get();
	return 0;
}