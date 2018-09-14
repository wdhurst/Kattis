#include <iostream> 

using namespace std;

const int MAXSIZE = 1000;

void checkAvgs(int compStudents[MAXSIZE], int bizStudents[MAXSIZE], int numComp, int numBiz);
void initarrays(int compStudents[MAXSIZE], int bizStudents[MAXSIZE]);

int main()
{
    int numtests, numComp, numBiz;
    int compStudents [MAXSIZE];
    int bizStudents [MAXSIZE];
    initarrays(compStudents, bizStudents);
    
    cin >> numtests;
    for(int i =0; i < numtests; i++)
    {
        cin >> numComp >> numBiz;
        for (int j = 0; j < numComp; j++)
        {
            cin >> compStudents[j];
        }
        for (int k = 0; k < numBiz; k++)
        {
            cin >> bizStudents[k];
        }
        checkAvgs(compStudents, bizStudents, numComp, numBiz);
        initarrays(compStudents, bizStudents);
    }
}
void initarrays(int compStudents[MAXSIZE], int bizStudents[MAXSIZE])
{
    for(int i =0; i < MAXSIZE; i++) compStudents[i] = 0; 
    for(int j =0; j < MAXSIZE; j++) bizStudents[j] = 0;
}

void checkAvgs(int compStudents[MAXSIZE], int bizStudents[MAXSIZE], int numComp, int numBiz)
{
    int compTotal, bizTotal, compAvg, bizAvg, output, checkComp, checkBiz;
    compTotal = 0;
    bizTotal =0;
    checkBiz = 0;
    checkComp = 0;
    cout << compTotal << endl;
    for(int i =0; i < numComp; i++)
    { 
        compTotal += compStudents[i];
    }
    for(int j =0; j < numBiz; j++) 
    {
        bizTotal += bizStudents[j];
    }
    compAvg = compTotal/numComp;
    bizAvg = bizTotal/numBiz;
    int z =0;
    while(z < numComp)
    {
        int c =0;
        for (int k =0; i < bizTotal; k++)
        {
            checkBiz += bizStudents[k];
            checkBiz += compStudents[z];
            checkComp += compStudents[]
        }
        z++;
        
    }

}