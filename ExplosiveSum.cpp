/*#include<iostream>
using ull = unsigned long long;

ull exp_sum(unsigned int n) {
    //int table[(N)*(N)] = { 0 };
    int N = n + 1;
    ull* table = new ull[N * N]{ 0 };
    ull NoSum = 0, Sum = 0;
    for ( int i = 0; i < N; i++) {
        table[i * N] = 1;
    }
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (i > j)table[j + i * N] = table[j + (i - 1) * N];
            else {
                NoSum = table[j + (i - 1) * N];
                Sum = table[(i * N + j) - i];
                table[j + i * N] = NoSum + Sum;
            }
        }
    }

    return table[(N*N)-1];
}

int main() {
    const int n = 371;
    std::cout << exp_sum(n);
    
}*/