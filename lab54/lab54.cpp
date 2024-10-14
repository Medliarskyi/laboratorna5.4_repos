#include <iostream>
#include <cmath>
using namespace std;

// Ітераційний спосіб
double S0(const int K, const int N)
{
    double s = 1;
    for (int i = K; i <= N; i++)
        s *= (K * 1.0 / i) + (i * 1.0 / N);
    return s;
}

// Рекурсивний спуск, параметр зростає
double S1(const int K, const int N, const int i)
{
    if (i > N)
        return 1.0;
    else
        return ((K * 1.0 / i) + (i * 1.0 / N)) * S1(K, N, i + 1);
}

// Рекурсивний спуск, параметр спадає
double S2(const int K, const int N, const int i)
{
    if (i < K)
        return 1.0;
    else
        return ((K * 1.0 / i) + (i * 1.0 / N)) * S2(K, N, i - 1);
}

// Рекурсивний підйом, параметр зростає
double S3(const int K, const int N, const int i, double t)
{
    t *= (K * 1.0 / i) + (i * 1.0 / N);
    if (i >= N)
        return t;
    else
        return S3(K, N, i + 1, t);
}

// Рекурсивний підйом, параметр спадає
double S4(const int K, const int N, const int i, double t)
{
    t *= (K * 1.0 / i) + (i * 1.0 / N);
    if (i <= K)
        return t;
    else
        return S4(K, N, i - 1, t);
}

int main()
{
    int K, N;
    cout << "K = "; cin >> K;
    cout << "N = "; cin >> N;

    cout << "(iter) S0 = " << S0(K, N) << endl;
    cout << "(rec up ++) S1 = " << S1(K, N, K) << endl;
    cout << "(rec up --) S2 = " << S2(K, N, N) << endl;
    cout << "(rec down ++) S3 = " << S3(K, N, K, 1) << endl;
    cout << "(rec down --) S4 = " << S4(K, N, N, 1) << endl;

    return 0;
}