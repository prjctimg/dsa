#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int pairwise(const vector<int> &numbers)
{
    int res = 0,
        n = numbers.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            if (numbers[i] * numbers[j] > res)
            {
                res = numbers[i] * numbers[j];
            }
        }
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    int res = pairwise(numbers);
    cout << res << "\n";
    return 0;
}