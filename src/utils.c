#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../include/utils.h"

void get_memory_usage() {
    FILE *fp = fopen("/proc/meminfo", "r");
    if (fp == NULL) return;
    char label[32];
    long value;
    long total = 0, free = 0;
    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        if (sscanf(line, "%s %ld", label, &value) >= 2) {
            if (strcmp(label, "MemTotal:") == 0) total = value;
            if (strcmp(label, "MemFree:") == 0) free = value;
        }
    }
    printf("RAM: Toplam %ld MB | Bos %ld MB\n", total/1024, free/1024);
    fclose(fp);
}

double get_cpu_usage() {
    long double a[4], b[4];
    FILE *fp;
    fp = fopen("/proc/stat","r");
    fscanf(fp,"%*s %Lf %Lf %Lf %Lf",&a[0],&a[1],&a[2],&a[3]);
    fclose(fp);
    sleep(1);
    fp = fopen("/proc/stat","r");
    fscanf(fp,"%*s %Lf %Lf %Lf %Lf",&b[0],&b[1],&b[2],&b[3]);
    fclose(fp);
    double loadavg = ((b[0]+b[1]+b[2]) - (a[0]+a[1]+a[2])) / ((b[0]+b[1]+b[2]+b[3]) - (a[0]+a[1]+a[2]+a[3]));
    return loadavg * 100;
}
