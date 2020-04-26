#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Q = 0;
    unsigned long x;
    unsigned int k;
    unsigned int c;
    cin >> Q;
    for (int q = 0; q < Q; q++)
    {
        cin>>x>>k;
        /* 判断编号为x的节点在第几层 */
        c = (unsigned int)log2((double)x) + 1;
        if (k >= c)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            /* 计算第c层起始编号 */
            unsigned long int csid = 1;
            for (int i = 1; i < c; i++)
                csid *= 2;
            /* 计算x上一层祖先编号 */
            unsigned long int pid = x;
            while (c > k)
            {
                pid = csid / 2 + (pid - csid) / 2;
                c--;
                csid /= 2;
            }
            cout<<pid<<endl;
        }
    }
    return 0;
}