#include <iostream>

using namespace std;
int main(){
    int a, b, c, m;
    cin >> a >> b >> c;
    a > b? m = a:m = b;
    if (c > m) m = c;
    cout << m;
    return 0;
}

