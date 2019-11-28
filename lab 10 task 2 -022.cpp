#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	string line, name;
	int age;

	ofstream outfile("task_2.txt");
	ifstream infile("task_2.txt");
	if (outfile.is_open())
	{
		cout << " writing to file:-" << endl;
		cout << " enter your name:";
		getline(cin, name);
		cout << " enter your age:";
		cin >> age;

		outfile << " name: " << name << endl;
		outfile << " age: " << age << endl;

		outfile.close();
	}
	else
	{
		cout << " \nfiling error" << endl;
	}
	cout << " \nreading from file" << endl;
	while (infile.is_open() && !infile.eof())
	{
		getline(infile, line);
		cout << line << endl;
	}
	infile.close();
	return 0;

}