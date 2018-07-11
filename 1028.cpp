#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int repeat;
    scanf("%d", &repeat);
    for(int i=0; i<repeat; i++){
        int n;
        scanf("%d", &n);
        printf("%X\n", n);
    }
    return 0;
}
