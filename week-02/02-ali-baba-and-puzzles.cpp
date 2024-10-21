
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
// # 212024, Monday.

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

long long performOperation(long long x, long long y, char op)
{
    if (op == '+')
        return x + y;
    if (op == '-')
        return x - y;
    if (op == '*')
        return x * y;
    return 0;
}

bool canFormD(long long a, long long b, long long c, long long d)
{
    vector<long long> numbers = {a, b, c};
    vector<char> operators = {'+', '-', '*'};

    do
    {
        for (char op1 : operators)
        {
            for (char op2 : operators)
            {
                // 1. (a op1 b) op2 c
                long long result1 = performOperation(performOperation(numbers[0], numbers[1], op1), numbers[2], op2);

                // 2. a op1 (b op2 c)
                long long result2 = performOperation(numbers[0], performOperation(numbers[1], numbers[2], op2), op1);

                if (result1 == d || result2 == d)
                {
                    return true;
                }
            }
        }
    } while (next_permutation(numbers.begin(), numbers.end())); 

    return false;
}

int main()
{

    long long a, b, c, d;
    // a = 3, b = 4, c = 5, d = 23; 
    cin >> a >> b >> c >> d;

    if (canFormD(a, b, c, d))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
