#include <stdio.h>

int main(void) {
    int popularity, size;
    long long homeValue;  // Use a larger type if popularity can be large

    printf("Enter popularity: ");
    scanf("%d", &popularity);


    printf("Enter size: ");
    scanf("%d", &size);


    long long popCubed = (long long)popularity * popularity * popularity;
    long long sizeSquared = (long long)size * size;

    homeValue = (popCubed + sizeSquared) * 10000;

    printf("Home value is: %lld\n", homeValue);

    return 0;
}
