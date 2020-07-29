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

	int x_temp = 0;
	int x_init = 1;
	int x_new = 0;

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
		x_vector.push_back(x_new);
		time_vector.push_back((k + 1) * data[0]);
		x_temp = x_new;
	}

	cout << x_temp << endl;
	
	for (int z = 0; z < x_vector.size(); z++)
	{
		cout << x_vector[z] << ' ';
	}

	for (int q = 0; q < time_vector.size(); q++)
	{
		cout << time_vector[q] << ' ';
	}



	input.close();
	output.close();
	return 0;
}