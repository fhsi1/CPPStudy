#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;

    for (int i = 1; i < 5; i++)
        a.push_back(i); // input the element at the end
    for (auto aa : a)
        cout << aa << " ";
    cout << endl; // change the line
    a.pop_back(); // last element remove
    a.pop_back(); // last element remove
    for (auto aa : a)
        cout << aa << " ";
    cout << endl;

    return 0;
}