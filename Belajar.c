#include <stdio.h>

int main(){
    int n;

    // input nilai n
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    //cek kondisi
    if (n == 10){
        int hasil = n + n;
        printf("karena n = 10, maka hasil n + n = %d\n", hasil);
    } else {
        printf("n bukan 10, tidak ada perhitungan.\n");
    }
    return 0;
}