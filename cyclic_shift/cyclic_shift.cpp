#include <iostream>

int Swap(int index_1, int index_2, int *&mas)
{
    int tmp = 0;
    if (index_1 != index_2)
    {
        tmp = mas[index_1];
        mas[index_1] = mas[index_2];
        mas[index_2] = tmp;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    int n = 0;
    for (int i = 0; argv[1][i] != '\0'; ++i)
    {
        n = 10 * n + (argv[1][i] - '0');
    }

    int *mas = new int[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    int k;
    std::cin >> k;

    if (k < 0)
    {
        k = abs(k) % n;
        k = n - k;
    }
    else
    {
        k = k % n;
    }

    int l1 = 0, r1 = n - k - 1;
    while (l1 < r1)
    {
        Swap(l1, r1, mas);
        l1++;
        r1--;
    }

    int l2 = n - k;
    int r2 = n - 1;
    while (l2 < r2)
    {
        Swap(l2, r2, mas);
        l2++;
        r2--;
    }

    int l3 = 0;
    int r3 = n - 1;
    while (l3 < r3)
    {
        Swap(l3, r3, mas);
        l3++;
        r3--;
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << mas[i] << '\n';
    }
    for (int i = 0; i < n - 1; ++i)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << mas[n - 1] << '\n';

    delete[] mas;
    return 0;
}