#include <iostream> 

using namespace std;

int main()
{
    int grade1, grade2, grade3, grade4, total, highest, groupNum;
    highest =0;
    for(int i=1; i<=5; i++)
    {
        cin>>grade1>>grade2>>grade3>>grade4;
        total=grade1+grade2+grade3+grade4;
        if(total>highest)
        {
            highest = total;
            groupNum = i;
        }
    }
    cout << groupNum << " " << highest<<endl;
}