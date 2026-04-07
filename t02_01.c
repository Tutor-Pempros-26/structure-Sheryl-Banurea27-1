// 12S25050 - Sheryl Valentina Banurea
#include <stdio.h>

struct Purchase {
    int jumlah_buku;
    long harga_buku;
    long total_belanja;
    double diskon;
    double total_bayar;
};

int main(int _argv, char **_argc) {
    struct Purchase p;
    
    scanf("%d", &p.jumlah_buku);
    scanf("%ld", &p.harga_buku);
    
    p.total_belanja = p.jumlah_buku * p.harga_buku;
    
    if (p.total_belanja > 500000) {
        p.diskon = p.total_belanja * 0.15;
    } else if (p.total_belanja >= 100000) {
        p.diskon = p.total_belanja * 0.10;
    } else if (p.total_belanja > 50000) {
        p.diskon = p.total_belanja * 0.05;
    } else {
        p.diskon = 0;
    }
    
    p.total_bayar = p.total_belanja - p.diskon;
    
    if (p.diskon == 0) {
        printf("---\n");
    } else {
        printf("%.2f\n", p.diskon);
    }
    printf("%.2f\n", p.total_bayar);
    
    return 0;
}
