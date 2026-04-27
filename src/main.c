#include <stdio.h>
#include "../include/utils.h"

int main() {
    printf("=== Linux Sistem Izleyici Başlatılıyor ===\n");
    get_memory_usage();
    printf("Hesaplaniyor (1 sn bekleyin...)\n");
    
    // Dikkat: Burada %.2f kullanımı get_cpu_usage()'dan gelen sayıyı basar.
    // Sondaki %% ise ekrana sadece % karakterini yazar.
    printf("CPU Kullanımı: %.2f%%\n", get_cpu_usage());
    
    return 0;
}
