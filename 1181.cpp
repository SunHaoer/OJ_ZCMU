#include<iostream>
#include<algorithm>
using namespace std;

int init(string &str1, string &str2) {
    while(str1.length() < str2.length()) {
        str1 = '0' + str1;
    }
    while(str2.length() < str1.length()) {
        str2 = '0' + str2;
    }
    return str1.length();
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int repeat = 0;
    cin >> repeat;
    while(repeat--) {
        string str1 = "", str2 = "", str3 = "";
        int a = 0, b = 0, c = 0;
        cin >> str1 >> str2;
        int len = init(str1, str2);
        for(int i = len - 1; i >= 0; i--) {
            a = str1[i] - '0';
            b = str2[i] - '0';
            str3 += ((a + b + c) % 10 + '0');
            c = (a + b + c) / 10;
        }
        if(c != 0) str3 += (c + '0');
        reverse(str3.begin(), str3.end());
        cout << str3 <<endl;
    }

    return 0;
}
