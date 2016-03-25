/*

	You have N steps to climb .
	You can either take one step or two steps at a time .
	You need to find the total number of ways you can reach N steps .

	Example : For N=4 , You can either reach 4 steps in following ways
	->1111
	->112
	->121
	->211
	->22
	So total number of ways is 5

	Input : A Integer denoting N (number of steps )
	Output : Return an Integer denoting the number of ways to reach N steps

	Example Input : get_steps(5)
	Example Output : Returns 8

	Note : Test Cases would be small <25.

*/
#include "stdafx.h"

int recursiveCall(int val);
int get_steps(int s)
{
	if (s == 0)
	{
		return 0;
	}
	int c = 0;
	c = recursiveCall(s + 1);

	return c;
}

int recursiveCall(int val)
{
	if (val == 0)
		return 0;
	if (val == 1)
		return 1;
	return recursiveCall(val - 1) + recursiveCall(val - 2);

}