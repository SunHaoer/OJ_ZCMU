#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double n;
    scanf("%lf", &n);
    if(n < 0 || n >= 1000) {
        printf("invalid data!\n");
    } else {
        printf("%d\n", int(sqrt(n) + 0.001));
    }
    return 0;
}
