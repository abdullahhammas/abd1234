#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	string line;
	int sum = 0;
	ofstream outfile("task_1.txt");
	int arr[5] = { 2,4,6,7,1 };

	if (outfile.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			outfile << arr[i] << " ";
			sum += arr[i];

		}
		cout << "writing to file" << endl;
		outfile.close();
	}
	else {
		cout << "\nfiling error" << endl;

	}
	ifstream infile("task_1.txt");
	cout << "the retrieved data is :-" << endl;
	while (infile.is_open() && !infile.eof())

	{
		getline(infile, line);
		cout << line << endl;

	}
	infile.close();
	outfile.open("task_1.txt", ios::app);
	if (outfile.is_open())
	{
		outfile << "sum = " << sum << endl;
		outfile.close();
			
	}

	return 0;
}
