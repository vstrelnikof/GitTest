#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
    for (auto i = 0; i < 100; ++i)
    {
        cout << i << " ";
    }

    cout << endl << "Enter some int value:" << endl;

    auto val = 0;

    cin >> val;

    return 0;
}

