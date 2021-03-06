#include <chrono>
#include <cstdio>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

int randint(int l, int r)
{
    return rnd() % (r - l + 1) + l;
}

int main()
{
    int n = randint(100, 500);
    int m = randint(2, 5);

    while (n--)
        putchar(randint('a', 'a' + m - 1));

    return 0;
}
