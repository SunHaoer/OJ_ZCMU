#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    double arr[3];
    int len = 3;
    for(int i = 0; i < len; i++) {
        scanf("%lf", &arr[i]);
    }
    sort(arr, arr + len);
    for(int i = 0; i < len; i++) {
        if(i != 0) printf(" ");
        printf("%.2f", arr[i]);
    }
    return 0;
}
