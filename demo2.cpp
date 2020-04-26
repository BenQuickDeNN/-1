#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int T = 0;
    int x, y;
    int n;
    vector<pair<float, float>> PointA;
    vector<pair<float, float>> PointB;
    float res;
    float tmpFloat;
    cin>>T;
    for (int t = 0; t < T; t++)
    {
        n = 0;
        PointA.clear();
        PointB.clear();
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>x>>y;
            PointA.emplace_back(make_pair((float)x, (float)y));
        }
        for (int i = 0; i < n; i++)
        {
            cin>>x>>y;
            PointB.emplace_back(make_pair((float)x, (float)y));
        }
        res = (float)INT_MAX;
        tmpFloat = (float)INT_MAX;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                tmpFloat = (PointA[i].first - PointB[j].first) * 
                    (PointA[i].first - PointB[j].first) + 
                    (PointA[i].second - PointB[j].second) *
                    (PointA[i].second - PointB[j].second);
                if (tmpFloat < res)
                    res = tmpFloat;
            }
        res = sqrt(res);
        printf("%.3f\n", res);
    }
    return 0;
}