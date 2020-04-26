#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int data[1000];
    unsigned int T = 0;
    string tmpStr;
    int top;
    int back;
    int len;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        unsigned int Q = 0;
        top = 0;
        back = 0;
        len = 0;
        cin>>Q;
        for (int j = 0; j < Q; j++)
        {
            cin>>tmpStr;
            if (tmpStr == "PUSH")
            {
                int tmpInt;
                cin>>tmpInt;
                data[back++] = tmpInt;
                len++;
            }
            else if (tmpStr == "TOP")
            {
                if (len < 1)
                    cout<<"-1"<<endl;
                else
                    cout<<data[top]<<endl;
            }
            else if (tmpStr == "POP")
            {
                if (len < 1)
                    cout<<"-1"<<endl;
                else
                {
                    top++;
                    len--;
                }
            }
            else if (tmpStr == "SIZE")
                cout<<len<<endl;
            else if (tmpStr == "CLEAR")
            {
                len = 0;
                top = 0;
                back = 0;
            }
        }
    }
    return 0;
}