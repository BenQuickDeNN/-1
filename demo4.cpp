#include <stack>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    stack<int> stkA, stkB;
    int N = 0;
    int countA = 0;
    int countB = 0;
    string tmpStr;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>tmpStr;
        if (tmpStr == "add")
        {
            int tmpInt;
            cin>>tmpInt;
            stkA.push(tmpInt);
            countA++;
        }
        else if (tmpStr == "poll")
        {
            while (countA > 1)
            {
                int tmpInt = stkA.top();
                stkB.push(tmpInt);
                countB++;
                stkA.pop();
                countA--;
            }
            stkA.pop();
            countA--;
            while (countB > 0)
            {
                int tmpInt = stkB.top();
                stkA.push(tmpInt);
                countA++;
                stkB.pop();
                countB--;
            }
        }
        else if (tmpStr == "peek")
        {
            while (countA > 1)
            {
                int tmpInt = stkA.top();
                stkB.push(tmpInt);
                countB++;
                stkA.pop();
                countA--;
            }
            cout<<stkA.top()<<endl;
            while (countB > 0)
            {
                int tmpInt = stkB.top();
                stkA.push(tmpInt);
                countA++;
                stkB.pop();
                countB--;
            }
        }
    }
}