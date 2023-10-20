//Variant 12

#include <stdio.h>
#include <math.h>

int main()
{
    double angle;
    
    printf("Введіть кут в градусах: ");
    scanf("%lf", &angle);
    printf("Ви ввели: %lf\n", angle);
    
    // Перетворення кута з градусів в радіани
    double radians = angle * M_PI / 180.0;
    printf("Радіани: %lf\n", radians);
    
    double z1 = (sin(4*radians) / (1 + cos(4*radians))) * (cos(2*radians) / (1 + cos(2 * radians)));
    printf("z1: %.4lf\n", z1);
    
    double z2 = 1.0 / tan(3/2*M_PI - radians); 
    printf("z2: %.4lf\n", z2);

    return 0;
}
