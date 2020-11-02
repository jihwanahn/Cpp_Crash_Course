#include <iostream>

using namespace std;

int step_function(int x);


int main()
{
	cout << "Hello World!" << endl;
	cout << step_function(1) << endl;
	cout << step_function(0) << endl;
	cout << step_function(-10) << endl;

	
	return 0;
}

int step_function(int x)
{
	int result = 0;
	if (x < 0)
	{
		result = -1;
	}
	else if (x > 0)
	{
		result = 1;
	}
	return result;
}