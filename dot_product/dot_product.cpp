#include <iostream>

int main(int argc, char *argv[])
{
    int n = 0;
    double suma = 0;
    if (argc != 2)
    {
        return 1;
    }
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        n = n * 10 + (argv[1][i] - '0');
    }
    double *mas_a = new double[n];
    double *mas_b = new double[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> mas_a[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> mas_b[i];
    }
    for (int i = 0; i < n; i++)
    {
        suma += mas_a[i] * mas_b[i];
    }
    std::cout << suma;
    delete[] mas_a;
    delete[] mas_b;
    return 0;
}
