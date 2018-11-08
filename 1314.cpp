#include<cstdio>
#include<algorithm>
using namespace std;
const int MAX = 102400;

int main()
{
    int n;
    while(scanf("%d", &n) != EOF) {
        int minn1 = MAX, minn2 = MAX, maxn1 = -MAX, maxn2 = -MAX;
        for(int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            minn1 = min(minn1, a);
            minn2 = min(minn2, b);
            maxn1 = max(maxn1, a);
            maxn2 = max(maxn2, b);
        }
        printf("%d\n", (maxn1 - minn1) * (maxn2 - minn2));
    }
    return 0;
}
