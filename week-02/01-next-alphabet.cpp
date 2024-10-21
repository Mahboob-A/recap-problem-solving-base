
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
// 212024, Monday.

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_set>
#include <stack>
#include <limits>
#include <string>
#include <iomanip>
#include <utility>

using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define DOUBLE_INF 1e18
#define INT_INF 1e9
const int N = 1e5 + 100;
vector<int> ans;
vector<pii> allSrc;
pii src, destination;
priority_queue<pii, vecPii, greater<pii>> q;
vecPii adjList[N];
int visited[N];
int parent[N];
long long dist[N];
int n, m;

void sol()
{

        char c;
        cin >> c;

        if (c == 'z' || c == 'Z')
        {
                cout << "a" << "\n";
                return;
        }

        cout << char(c + 1) << "\n";
}

int main()
{

        sol();

        return 0;
}