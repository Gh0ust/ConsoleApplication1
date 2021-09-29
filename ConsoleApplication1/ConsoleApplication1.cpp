#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x, y, z, p;
    cin >> x >> y >> z;
    int S, P;
    P = x + y + z;
    p = P / 2;
    S = (p - x) * (p - y);
    cout << P << " " << S;
}