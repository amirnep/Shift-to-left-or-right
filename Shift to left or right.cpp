#include<iostream>
#define max_size 10
using namespace std;
int main()
{
	int n[max_size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int shift_size;
	int shift_index;
	bool shift_to_left = true;
	cout << "Enter shift size: ";
	cin >> shift_size;
	if (shift_size > max_size - 1)
	{
		cout << "Error! shift size must be less than " << max_size << endl;
		//return;
	}
	cout << "Enter shift index: ";
	cin >> shift_index;
	if (shift_index > max_size - 1 || shift_index < 0)
	{
		cout << "Error! shift index must be less then " << max_size << "and greater than or equal to 0." << endl;
		//return;
	}
	if (shift_to_left == true)
	{
		for (int k = 0; k < shift_size; k++)
		{
			for (int i = shift_index; i > 0; i--)
			{
				n[i] = n[i + 1];
			}
		}
	}
	else
	{
		for (int k = 0; k < shift_size; k++)
		{
			for (int i = shift_index; i > 0; i--)
			{
				n[i] = n[i - 1];
			}
		}
	}
	cout << "Shift array is: " << "\n";
	for (int i = 0; i < max_size; i++)
	{
		cout << n[i] << " ";
		cout << endl;
	}
}