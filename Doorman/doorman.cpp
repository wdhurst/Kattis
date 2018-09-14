#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const int MAXSIZE = 100;
void initArray(char queue[MAXSIZE]);

int main()
{
    char queue[MAXSIZE];
    initArray(queue);
    int greatestDiff, numMen, numWomen, letIn = 0;
    cin >> greatestDiff;
    cin.get();
    cin.getline(queue, 100);
    int i =0;
    while(queue[i] != 'E')
    {
        if(queue[i] == 'W')
            numWomen++;
        else if(queue[i] == 'M')
            numMen++;
        letIn++;
        i++;
        if(abs(numMen - numWomen) > greatestDiff)
            {
                if(numMen > numWomen && (queue[i] != 'W'))
                {
                    break;
                }
                else if(numMen > numWomen && (queue[i] == 'W'))
                {
                    letIn++;
                    i++;
                    numWomen++;
                }
                else if(numMen < numWomen && (queue[i] != 'M'))
                {
                    break;
                }
                else
                {
                    letIn++;
                    i++;
                    numMen++;
                }
            }
    }
    letIn--;
    cout << letIn << "\n";
}

void initArray(char queue[MAXSIZE])
{
    for (int i =0; i < MAXSIZE; i++) queue[i]='E';
}