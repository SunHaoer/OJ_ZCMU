#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int arr[3];
    int len = 3, maxn = -1024;
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
        maxn = max(maxn, arr[i]);
    }
    printf("%d\n", maxn);
    return 0;
}
