#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool loggedIn()
{
	string username, password, user, pass;
	cout << "Enter the username:";
	cin >> username;
	cout << "Enter the password:";
	cin >> password;
	ifstream read(username + ".txt");
	getline(read, user);
	getline(read, pass);
	if (user == username && pass == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int choice;
	cout<<"Enter the choice:\n1Registration.\n2:Login."<<endl;
	cout << "Enter your choice:" << endl;
	cin >> choice;
	if (choice == 1)
	{
		string username, password;
		cout << "Set username:";
		cin >> username;
		cout << "Set password:";
		cin >> password;
		ofstream file;
		file.open(username + ".txt");
		file.close();
		main();


	}
	else if (choice == 2)
	{
		bool status = loggedIn();
		if (status)
		{
			cout << "Wrong information Please try again:"<<endl;
			system("PAUSE");
			return 0;

		}
		else
		{
			cout << "Login Succesfully:" << endl;
			system("PAUSE");
			return 1;
		}
	}


}