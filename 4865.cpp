#include<cstdio>
using namespace std;

int main()
{
    int year;
    scanf("%d", &year);
    printf("%d ", year);
    if(year % 4 == 0 && year % 100 != 0) printf("is a leap year!");
    else printf("is not a leap year!");
    return 0;
}
