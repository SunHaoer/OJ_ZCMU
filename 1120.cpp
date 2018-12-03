#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int repeat;
    scanf("%d", &repeat);
    while(repeat--) {
        int n, maxn = -99999999;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            int temp;
            scanf("%d", &temp);
            maxn = max(maxn, temp);
        }
        printf("%d\n", maxn);
    }
    return 0;
}
