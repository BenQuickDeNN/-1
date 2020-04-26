#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int tmpInt;
    vector<int> sA;
    vector<int> sB;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>tmpInt;
        sA.emplace_back(tmpInt);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>tmpInt;
        sB.emplace_back(tmpInt);
    }
    return 0;
}