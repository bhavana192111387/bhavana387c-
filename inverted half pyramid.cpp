#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int x = rows; x >= 1; --x)
    {
        for(int j = 1; j <= x; ++j)
{
	cout<<j<<"";
}
cout << endl;
}
return 0;

