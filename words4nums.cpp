#include <iostream>
#include <string>

using namespace std;

int main()
{
    int current;
    int nums[100];
    for (int i =0; i<100; i++)
        nums[i]=i;
    cin >> current;
    for (int j=0; j<100; j++)
    {
        if (current == nums[j])
        {
            cout << "match" << endl;
        }
    }
}