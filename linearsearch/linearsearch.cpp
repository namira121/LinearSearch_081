#include <iostream>
using namespace std;

int arr[20]; // Array to be searched 
int n; // Number of elements in the array
int i; // Index of array elements  

void input() 
{
	while (true)
	{
		cout << "Enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray hould have mininum 1 and maximum 20 elements. \n\n";
	}
	// Accept array elements
	cout << "\n---------------------\n"; 
	cout << " Enter Array Elements \n";
	cout << "----------------------\n";
	for (i = 0;i < n;i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}




void LinearSearch()
{
	char ch; 
	int comparisons; // Number of comparisons

	do
	{
		//Accept the number to be searched
		cout << "\nEnter the element you want to search: "; //Langkah 1
		int item;
		cin >> item;

		comparisons = 0;
	}
}