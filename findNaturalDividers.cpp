#include <iostream>
#include <vector>

using namespace std;

vector<int> findNaturalDividers(int n);

int main(int argc, char const *argv[])
{
    int n;

    cout << "Введите число ";
    cin >> n;

    vector<int> allNod = findNaturalDividers(n);

    cout << "Все натуральные нечётные делители числа " << n << endl;

    for (auto &&el : allNod)
    {
        cout << el << endl;
    }
    

    return 0;
}

/// @brief Нахождение всех натуральных делителей (за исключением 1 и самого числа)
/// @param n Число
/// @return Вектор всех натуральных делителей
vector<int> findNaturalDividers(int n)
{
    vector<int> nod;
    for (int i = 2; i <= n / 2; i += 1)
        if (n % i == 0)
        {
            nod.push_back(i);
        }

        return nod;
}
