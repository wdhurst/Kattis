#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;
    if(first.length()>second.length()||first.length()==second.length())
        cout << "go" << endl;
    else
        cout << "no" << endl;
}