#include<cstdio>
using namespace std;

int main()
{
    double x;
    scanf("%lf", &x);
    if(x < 1) printf("y=%.2lf", x);
    else if(x >= 1 && x < 10) printf("y=%.2lf", 2 * x - 1);
    else printf("y=%.2lf", 3 * x - 11);
    return 0;
}
