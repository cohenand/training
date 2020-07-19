/*#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{

	ifstream input;
	ofstream output;
	string input_arr[6] = { "a","a","a","a","a","a" };
	int data[2] = { 0,0 };
	int i = 0;
	int j = 0;
	stringstream ss;


	int x_temp = 0;
	int x_init = 1;
	int x_new = 0;



	input.open("params.dat");
	output.open("output.dat");


	//get data from params.dat
	while (input_arr[i] != "")
	{
		input >> input_arr[i];
		cout << input_arr[i] << endl;
		if ((i + 1) % 3 == 0)
		{
			ss << input_arr[i] << ' ';

			ss >> data[j];
			j++;
			cout << data[j - 1] << endl;

			//data[j] = stof(input_arr[i]);
			//cout << data[j] << endl;
			//j++;
		}

		i++;

	}

	x_temp = x_init;

	for (int k = 0; k < data[1]; k++)
	{
		x_new = (1 - 3 * data[0]) * x_temp;
		x_temp = x_new;
	}

	cout << x_temp;

	input.close();
	output.close();
	return 0;
}

*/



#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{

	ifstream input;
	ofstream output;
	//string input_arr[6] = { "a","a","a","a","a","a" };
	float data[2] = { 0,0 };
	int i = 0;
	int j = 0;
	//stringstream ss;


	int x_temp = 0;
	int x_init = 1;
	int x_new = 0;



	input.open("params.dat");
	output.open("output.dat");


	//get data from params.dat
	while (!input.eof())
	{
		input >> data[i];
		cout << data[i] << endl;


		i++;

	}

	x_temp = x_init;

	for (int k = 0; k < data[1]; k++)
	{
		x_new = (1 - 3 * data[0]) * x_temp;
		x_temp = x_new;
	}

	cout << x_temp;

	input.close();
	output.close();
	return 0;
}