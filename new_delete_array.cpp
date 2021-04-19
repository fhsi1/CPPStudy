#include <iostream>

using namespace std;

int	main()
{
	int	arr_size;
	int	i;

	cout << "array size : ";
	cin >> arr_size;

	int	*list = new int[arr_size];
	for (i = 0; i < arr_size; i++)
		cin >> list[i];
	for (i = 0; i < arr_size; i++)
		cout << i << "th element of list : " << list[i] << endl;

	delete[] list;
	return (0);
}
