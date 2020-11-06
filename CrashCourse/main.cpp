#include <iostream>
#include <cstdio>

using namespace std;

int step_function(int x);


int main()
{
	int num1 = 42;
	int result1 = step_function(num1);

	int num2 = 2;
	int result2 = step_function(num2);

	int num3 = -32767;
	int result3 = step_function(num3);
	
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
