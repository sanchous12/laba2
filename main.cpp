#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
if (a>b){
cout << "max=" << a;
}
else{
cout << "max=" << b;
}
    return 0;
}
