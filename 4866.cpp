#include<cstdio>
using namespace std;

int main()
{
    double p, w, s, d;
    scanf("%lf %lf %lf", &p, &w, &s);
    if(s < 250) d = 0;
    else if(s >= 250 && s < 500) d = 0.02;
    else if(s >= 500 && s < 1000) d = 0.05;
    else if(s >= 1000 && s < 2000) d = 0.08;
    else if(s >= 2000 && s < 3000) d = 0.1;
    else d = 0.15;
    printf("freight=%.2f\n", p * w * s * (1 - d) );
    return 0;
}
