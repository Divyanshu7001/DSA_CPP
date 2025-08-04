#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    for (int st = 0; st < vec.size(); st++)
    {
        for (int end = st; end < vec.size(); end++)
        {
            cout << vec[end] << " ";
        }
        cout << endl;
    }

    return 0;
}