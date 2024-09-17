#include <stdio.h>
#include <string.h>

int main()
{
    char A[101], B[101];

    // Input dua string A dan B
    scanf("%s", A);
    scanf("%s", B);

    // Mendapatkan panjang string A dan B
    int panjangA = strlen(A);
    int panjangB = strlen(B);

    // Periksa jika panjang string berbeda
    if (panjangA != panjangB)
    {
        printf("BERBEDA\n");
    }
    else
    {
        // Jika panjangnya sama, periksa apakah keduanya identik
        if (strcmp(A, B) == 0)
        {
            printf("IDENTIK\n");
        }
        else
        {
            // Jika panjang sama tapi ada perbedaan karakter
            printf("MIRIP\n");
        }
    }

    return 0;
}