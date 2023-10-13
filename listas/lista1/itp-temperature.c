#include <stdio.h>

struct TemperatureList {
    double k;
    double c;
    double f;
};

void printTemperature(struct TemperatureList t, char scale) 
{
    printf("Celsius: %.2f\n", t.c);
    printf("Farenheit: %.2f\n", t.f);
    printf("Kelvin: %.2f\n", t.k);
}

int main()
{
    double temperature, k, f, c;
    char scale;

    scanf("%lf %c", &temperature, &scale);

    struct TemperatureList temperatureList;

    if (scale == 'C') {
        c = temperature;
        k = c + 273.15;
        f = c * 1.8 + 32;
    } else if (scale == 'F') {
        f = temperature;
        c = (f - 32) / 1.8;
        k = c + 273.15;
    } else if (scale == 'K') {
        k = temperature;
        c = k - 273.15;
        f = c * 1.8 + 32;
    } else {
        printf("Invalid scale.\n");
        return 1;
    }

    temperatureList.c = c;
    temperatureList.k = k;
    temperatureList.f = f;

    printTemperature(temperatureList, scale);

    return 0;
}