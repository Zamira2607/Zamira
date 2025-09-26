#include <iostream>
using namespace std;

//problem 11 (1)
/*
int main() {
        int n;
        int p= 0, ng = 0, count = 0;
        double sum = 0.00;

        cout << "Enter integers: " << endl;
        cin >> n;
        while (n != 0) {
            if (n > 0) {
                p++;
            } else {
                ng++;
            }
  sum += n;
            count++;

            cin >> n;
        }
 if (count == 0){}
        else {
            double average = sum / count;
            cout << "\nNumber of positives: " << p << endl;
            cout << "Number of negatives: " << ng << endl;
            cout << "Total: " << sum << endl;
            cout << "Average: " << average << endl;
        }

        return 0;

}*/

//problem 12  (2)
/*
int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}*/

//problem 13    (3)
/*
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}*/

//problem 14    (4)
/*
int main() {
        int n;
        cout << "Enter the height of the triangle: ";
        cin >> n;

        if (n == 0) {
            cout << "The depth is 0" << endl;
        } else {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << i << " ";
                }
                cout << "\n";
            }
        }

        return 0;
    }*/

//problem 17    (5)
/*
int main() {
    int n, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10; // get the last digit
        n = n / 10;
        sum += digit;

    }

    cout << "The sum of digits is: " << sum << endl;
    return 0;
}*/

//problem 18    (6)
/*
int main() {
    int b;
    cout << "Enter a binary number: ";
    cin >> b;
    int decimal = 0, base = 1;
    while (b > 0) {
        int lastdigit = b % 10;
        base *= 2;
        b = b / 10;
        decimal += lastDigit * base;
    }
    cout << "Decimal number: " << decimal << endl;
    return 0;
}*/

//problem 19    (7)
/*
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "The factors are: ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i;
            n = n / i;
        }
    }
    return 0;
}*/

//problem 23    (8)
/*
int main() {
    int n = 0;
    int p = 1;
    while (p * 2 < 30000) {
        p = p * 2;
        n++;
    }
    cout << "The largest n such that 2^n < 30000 is: " << n << endl;
    return 0;
}*/

//problem 22 (9)
/*
int main() {
    cout << "Miles:   Kilometers:" << endl;
    cout << "                    " << endl;

    for (int mile = 1; mile <= 10; mile++) {
        double km = mile * 1.609;
        cout << mile << "       " << km << endl;
    }

    return 0;
}*/

//problem 20 (10)
/*
int main() {
    int lim;
    cout << "Enter the value of i from 10000 to 100000: ";
    cin >> lim;
    double pi = 0.0;
    int sign = 1;
    for (int j = 1; j <= lim * 2; j += 2) {
        pi += sign * (1.0 / j);
        sign = -sign;
    }
    pi *= 4;
    cout << "For i = " << lim << ", pi ≈ " << pi << endl;
    return 0;
}*/

//problem 15 (11)
/*
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    double sum = 0.0;

    cout << "Harmonic series: ";
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
        if (i == 1)
            cout << "1";
        else
            cout << " + 1/" << i;
    }

    cout << "\nThe sum is = " << sum << endl;

    return 0;
}*/

//problem 24 (12)
int main() {
    int even = 0, odd = 0;

    for (int i = 0; i < 100000; i++) {
        int num = rand();
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Total even numbers: " << even << endl;
    cout << "Total odd numbers: " << odd << endl;

    return 0;
}








