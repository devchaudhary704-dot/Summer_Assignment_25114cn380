#include <stdio.h>

int main() {
    char name[50];
    float basic, hra, da, pf, tax, gross, net;

    printf("=== Salary Management System ===\n\n");
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    // calculating components
    hra = basic * 0.20;
    da = basic * 0.50;
    pf = basic * 0.12;
    tax = basic * 0.10;

    gross = basic + hra + da;
    net = gross - pf - tax;

    printf("\n--- Salary Slip for %s ---\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA (20%%)     : %.2f\n", hra);
    printf("DA (50%%)      : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", gross);
    printf("PF (12%%)      : %.2f\n", pf);
    printf("Tax (10%%)     : %.2f\n", tax);
    printf("---------------------------\n");
    printf("Net Salary    : %.2f\n", net);

    return 0;
}
