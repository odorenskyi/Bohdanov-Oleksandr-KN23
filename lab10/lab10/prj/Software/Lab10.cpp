#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <bitset>

using namespace std;


void myFunction_1()
{
	ofstream file("Text.txt", ios_base::app);
	if (file.is_open())
	{
		file << "\n\nБогданов Олександр\n"
				"ЦНТУ\n"
				"Кропивницький\n"
				"Україна\n"
				"2024\n\n";

		file  << "Зараз буде виведено число від 10 до 100" << endl;
			srand((unsigned) time(NULL));
			for (int i = 10; i <= 10; i++)
			{
				int random = 10 + (rand() % 91);
				file << random << endl << endl;
			}

		file.close();
	}
}
void myFunction_2()
{
	ofstream file("Text.txt", ios_base::app);
	if (file.is_open())
	{
		time_t currentTime;
		time(&currentTime);

		tm localTimeInfo;
		localtime_s(&localTimeInfo, &currentTime);

		char timeString[100];
		asctime_s(timeString, sizeof(timeString), &localTimeInfo);

		file << "Місцевий час: " << timeString <<endl<<endl;

		file.close();
	}
}
void myFunction_3()
{
	int x, y, z, b;
	cout << "Enter your x:"  << endl;
	cin >> x;
	cout << "Enter your y:" << endl;
	cin >> y;
	cout << "Enter your z:"  << endl;
	cin >> z;
	cout << "Enter your nat b" << endl;
	cin >> b;

	ofstream file("Text.txt", ios_base::app);

	file << "x: " << x << endl;
	file << "y: " << y << endl;
	file << "z: " << z << endl;
	file << "b: " << b << bitset<sizeof(int) * 8>(b) << endl;
	file.close();
}
int main()
{
	setlocale(LC_ALL, "ukr");

	myFunction_1();
	myFunction_2();
	myFunction_3();

	return 0;

}
