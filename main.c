#include <stdio.h>

int main() {
    int n, i;
    float total = 0.0, bilangan, rata_rata;
    
    printf("program menghitung rata-rata bilangan");
    printf("masukan jumlah bilangan:");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++) {
        printf("masukan bilangan ke%d:", i);
        scanf("%f", &bilangan);
        total += bilangan;
    }

    rata_rata = total/n;
    
    printf("rata rata dari %d bilangan yang dimasukan adalah: %.2f\n", n, rata_rata);
    printf("tekan enter untuk keluar");
    getchar(); //mengkonsumsi karakter newline (\n) sebelum keluar
    
    return 0;
}

