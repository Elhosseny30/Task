#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
#include <stack>
typedef long long ll;



using namespace std;

void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//int freq[10000+5];

stack<char> s;

void combineWords(string s1, string s2);

int main() {
    fastIO();
    

    combineWords("Ahmed is", "Amazing");


    

    return 0;
}

void combineWords(string s1, string s2)
{
    string s3;
    int max_bet = max(s1.size(),s2.size());
    for (int i = 0; i < max_bet; ++i) {
        if(i < s1.size())
            s3 += s1[i];
        if(i < s2.size())
            s3 += s2[i];
    }
    cout << s3 << "\n";

}