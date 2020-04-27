#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;

    for (int i = 1; i < 5; i++)
        a.push_back(i);

    cout << a.size() << endl; // count of elemnet
    cout << a[0] << endl;     // access 0 position (first)
    cout << a[2] << endl;     // access 2 position (third)

    return 0;
}