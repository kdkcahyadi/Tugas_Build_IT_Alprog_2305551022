#include <stdio.h>
#include <math.h>

// Fungsi untuk mengecek apakah N adalah bilangan prima
int cek_prima(long long N)
{
    // Jika N lebih kecil atau sama dengan 1, bukan bilangan prima
    if (N <= 1)
    {
        return 0;
    }

    // Jika N adalah 2 atau 3, itu adalah bilangan prima
    if (N == 2 || N == 3)
    {
        return 1;
    }

    // Jika N adalah bilangan genap atau habis dibagi 3, maka bukan bilangan prima
    if (N % 2 == 0 || N % 3 == 0)
    {
        return 0;
    }

    // Cek pembagi mulai dari 5 hingga akar kuadrat dari N
    for (long long i = 5; i * i <= N; i += 6)
    {
        if (N % i == 0 || N % (i + 2) == 0)
        {
            return 0; // Jika ditemukan pembagi, maka bukan prima
        }
    }

    return 1; // Jika tidak ada pembagi ditemukan, maka prima
}

int main()
{
    long long N;

    // Input bilangan N
    scanf("%lld", &N);

    // Cek apakah N adalah bilangan prima atau bukan
    if (cek_prima(N))
    {
        printf("PRIMA\n");
    }
    else
    {
        printf("BUKAN\n");
    }

    return 0;
}