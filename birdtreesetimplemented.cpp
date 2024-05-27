#define taskname "SFRAC"
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
const int maxN = 1000;

int n;
struct TFrac
{
    int x, y; //Tá»­ sá»‘ vÃ  máº«u sá»‘
};
struct Less //Function object = functor
{
    bool operator()(const TFrac& p, const TFrac& q)
    {
        return p.x * q.y < p.y * q.x;
    }
};
set<TFrac, Less> a;

void Enumerate()
{
    for (int x = 1; x <= n; ++x)
        for (int y = 1; y <= n; ++y)
            a.insert({x, y});
}

void Print()
{
    for (const TFrac& p: a)
        cout << p.x << ' ' << p.y << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen(taskname".INP", "r", stdin);
    freopen(taskname".OUT", "w", stdout);
    cin >> n;
    Enumerate();
    Print();

}