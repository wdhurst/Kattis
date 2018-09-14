#include <iostream>
#include <iomanip>

using namespace std;

const int MAXARRAY = 1000;

void initArray(int scores[MAXARRAY]);

int main()
{
    double c, n, test, total = 0;
    float avg;
    int scores[MAXARRAY];
    cin>>c;
    for(int i =0; i < c; i++)
    {
        int abvAvg = 0;
        initArray(scores);
        cin>>n;
        total = 0;
        avg = 0.0;
        for(int j=0; j < n; j++)
        {
            cin>>test;
            total += test;
            scores[j]= test;
        }
        avg = total/n;
        for(int k=0; k<n; k++)
        {
            if(scores[k] > avg) abvAvg++;
        }
    float percent = 0;
    cout << fixed << setprecision(3);
    percent = (abvAvg/n)*100;
    cout << percent << "%" <<endl;
    }
    
}

void initArray(int scores[MAXARRAY])
{
    for (int i=0; i<MAXARRAY; i++) scores[i] =0;
}