#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(void)
{

	ifstream input;
	ofstream output;
	float data[2] = { 0,0 };
	int i = 0;
	int j = 0;

	double x_temp = 0;
	double x_init = 1;
	double x_new = 0;
	int final = 0;

	vector<double> x_vector;
	vector<double> time_vector;



	input.open("/fslhome/cohenand/training/data/params.dat");
	output.open("/fslhome/cohenand/training/data/output.dat");


	//get data from params.dat
	while (!input.eof())
	{
		input >> data[i];
		//cout << data[i] << endl;


		i++;

	}

	x_temp = x_init;

	for (int k = 0; k < data[1]; k++)
	{
		x_new = (1 - 3 * data[0]) * x_temp;
		cout << (k)*data[0] << " ";
		cout << x_temp << endl;
		time_vector.push_back((k + 1) * data[0]);
		x_vector.push_back(x_new);
		x_temp = x_new;
		final = k;
	}
	cout << final*data[0] << " ";
	cout << x_temp << endl;


	input.close();
	output.close();
	return 0;
}