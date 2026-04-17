/*
there is 2 another solution 
1- Math formula for celling just print ( (n + 4) / 5 )
2- See if the input % 5 ==0 -> print input / 5
else print input/5 + 1
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (int)(ceil(n * 1.0 / 5)) << endl;
    return 0;
}
