#include <iostream>
using namespace std;
//problem 1
/*
int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);

}

int main() {
    int base, exp;
    cout << "Enter base and exponent number: ";
    cin >> base >> exp;
    cout << base << " power " << exp << " is " << power(base, exp) <<  endl;
    return 0;
}*/

//problem 2
/*
int reverse( int n, int rev=0) {
    if (n==0) return rev;
    int last = n%10;
    rev = rev*10 + last;
    return reverse( n/10, rev);
}
 int main() {
    int n;

    cout<<"Enter a number: ";
    cin>>n;
    cout<<reverse( n);
    return 0;
}*/

//problem 3
/*
int reverse(int n, int rev=0) {
    if (n==0) return rev;
    return reverse(n/10, rev*10 + (n%10));

}
bool palind(int n) {
    return n==reverse(n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (palind(n))
        cout << "Yes" << endl;
        else  cout << "No" << endl;
        return 0;

}*/
// problem 4
/*
bool primerecur(int n, int a) {
    if (n <= 2) return ( n==2);
    if (n%a == 0) return false;
    if (a*a > n) return true;
return primerecur(n, a+1);
}
bool prime(int n) {
    return primerecur(n, 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (prime(n))
        cout << "true" << endl;
        else cout << "false" << endl;
        return 0;
    }
*/

//problem 5
/*
int even(int n) {
    if (n==0)
        return 0;
    int last = n % 10;
    int count = (last%2 == 0) ? 1 : 0;
    return count + even(n/10);
}
 int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of even digits:" << even(n) << endl;
    return 0;
}
*/

//problem 6
/*
int product( int n) {
    if (n == 0) return 1;
    int last = n%10;
    return last * product (n/10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << product(n) << endl;
    return 0;
}*/

//problem 7
/*
bool Two(int n) {
    if (n == 1)
        return true;
    if (n == 0 || n % 2 != 0)
        return false;

    return Two(n / 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (Two(n))
        cout << n << " true" << endl;
    else
        cout << n << " false" << endl;

    return 0;
}*/

//problem 8
/*
bool increasing(int n) {
    if (n < 10)
        return true;

    int last = n % 10;
    int second = (n / 10) % 10;

    if (second >= last)
        return false;

    return increasing(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (increasing(n))
        cout << " true" << endl;
    else
        cout << " false" << endl;

    return 0;
}*/

//problem 9
/*
int Zeros(int n) {
    if (n == 0)
        return 1;

    if (n < 10)
        return (n == 0) ? 1 : 0;

    int last = n % 10;
    int count = (last == 0) ? 1 : 0;

    return count + Zeros(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << Zeros(n) << endl;
    return 0;
}*/

//problem 10

int Power(int x, int y) {
    if (y == 0)
        return 1;

    int half = Power(x, y / 2);

    if (y % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main() {
    int x, y;
    cout << "Enter base and exponent: ";
    cin >> x >> y;

    cout  << Power(x, y) << endl;
    return 0;
}
