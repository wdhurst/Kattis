#include <iostream> 
#include <string>
#include <cmath> 

using namespace std;

int main()
{
    int levels;
    string current;
    int size;
    bool needEscaped = false;
    char escaped[13]={'!','"','#','$','%','&','\'','(',')','*','[','\\',']'};
    while(cin)
    {
        cin >> levels;
        //cout << levels << endl;
        cin.ignore();
        getline(cin,current);
        if (current.empty())
            break;
        size = current.size();
        for(int i =0; i<size; i++)
        {
            for (int j=0; j<13; j++)
            {
                if (current[i]==escaped[j])
                {
                needEscaped = true;
                break;
                }   
                else
                {
                    needEscaped = false;
                }
            }
            if(needEscaped && levels==1)
                cout << "\\" << current[i];
            else if (needEscaped && levels > 1)
            {
                for(int k=0; k < (pow(2,levels) -1); k++)
                    cout << "\\";
                cout << current[i];
            }
            else
                cout << current[i];
        }
        current = "";
        cout << endl;
    }
}