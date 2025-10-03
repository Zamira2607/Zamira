#include <iostream>
using namespace std;
//problem 1
/*
int product(int a, int b, ) {
    return  a * b;}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;


    cout << "Product = " << product(num1, num2) << endl;

    return 0;
}*/

//problem 2
/*
double acc(double v1, double v2, double t) {
    return (v2 - v1) / t;
}

int main() {
    double v1, v2, t;
    cout << "Enter v1: ";
    cin >> v1;
    cout << "Enter v2: ";
    cin >> v2;
    cout << "Enter t: ";
    cin >> t;

    cout << "a = " << acc(v1, v2, t) << endl;

    return 0;
}*/

//problem 3 (8)
/*
int maximum(int a, int b, int c) {
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int minimum(int a, int b, int c) {
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    return min;
}
int main() {
    int x,y,z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Maximum is: " << maximum(x,y,z) << endl;
    cout << "Minimumis: " << minimum(x, y, z) << endl;

    return 0;
}*/

//problem 4 (9)
/*
int sum(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int product(int a, int b) {
    return a * b;
}
double division(int a, int b) {
    return (double)a / b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum is = " << sum(x, y) << endl;
    cout << "Subtract is = " << subtract(x, y) << endl;
    cout << "Product is = " << product(x, y) << endl;
    cout << "Division is= " << division(x, y) << endl;

    return 0;
}*/

//problem 5 (10)
/*
int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    for (int i = 1; i <= 75; i++) {
        cout << getTriangularNumber(i) << endl;
        if (i % 5 == 0) cout << endl;
    }
    return 0;
}*/

//problem 6 (11)
/*
void displayEven(int number) {
    cout << "Even digits: ";
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            cout << digit << endl;
        }
        number /= 10;
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    displayEven(num);

    return 0;
}*/

//problem 7 (12)
/*
int cubeOfDigits(int number) {
    int sum = 0, digit;
    while (number > 0) {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }
    return sum;
}
void isArmstrong(int sum, int number) {
    if (sum == number)
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is NOT an Armstrong number." << endl;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int sum = cubeOfDigits(num);
    isArmstrong(sum, num);

    return 0;
}*/

//problem 8 (13)
/*
int numberOfDaysInFebruary(int year) {
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
return 29;
return 28;
}

int main() {
int year;
cout << "Enter a year: ";
cin >> year;

cout << "February " << year << " has "
<< numberOfDaysInFebruary(year) << " days." << endl;

return 0;
}*/

//problem 9 (15)
/*
void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;
    for (char ch = ch1; ch <= ch2; ch++) {
        cout << ch << " = " << (int)ch << "\t";
        count++;
        if (count % numberPerLine == 0)
            cout << endl;
    }
    cout << endl;
}

int main() {
    printASCII('a', 'm', 6);

    return 0;
}*/

//problem 10 (16)
/*
void printMatrix(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rand() % 1001 << endl;
        }
        cout << endl;
    }
}
int main() {
    srand(time(0));

    int n;
    cout << "Enter matrix size n: ";
    cin >> n;

    printMatrix(n);

    return 0;
}*/

//problem 11 (17)
/*
int isPalindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (rev == original)
        return 1;
        return 0;
}

int main() {
    int count = 0, num = 2;
    while (count < 50) {
        if (isPalindrome(num) && num % 2 == 0) {
            cout << num << " ";
            count++;
            if (count % 5 == 0)
                cout << endl;
        }
        num++;
    }
    cout << endl;

    return 0;
}*/

//problem 12 (19)
/*
void displaySortedNumber(double a, double b, double c) {
    double temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    cout << a << " " << b << " " << c << endl;
}

int main() {
    double x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Numbers in increasing order: ";
    displaySortedNumber(x, y, z);

    return 0;
}*/

//problem 12 (20)
/*
string convertMillis(long millis) {
    long totalSeconds = millis / 1000;
    long seconds = totalSeconds % 60;
    long totalMinutes = totalSeconds / 60;
    long minutes = totalMinutes % 60;
    long hours = totalMinutes / 60;

    return to_string(hours)  + to_string(minutes)  + to_string(seconds);
}
int main() {
    long millis;
    cout << "Enter milliseconds: ";
    cin >> millis;

    cout << "Time = " << convertMillis(millis) << endl;

    return 0;
}*/

//problem 13 (23)
/*
int rollDice() {
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    cout << "You rolled " << die1 << " + " << die2 << " = " << die1 + die2 << endl;
    return die1 + die2;
}
int main() {
    srand(time(0));
    int sum = rollDice();
    if (sum == 2 || sum == 3 || sum == 12) {
        cout << "You lose" << endl;
    } else if (sum == 7 || sum == 11) {
        cout << "You win" << endl;
    } else {
        int point = sum;
        cout << "Point is " << point << endl;
        while (true) {
            sum = rollDice();
            if (sum == point) {
                cout << "You win" << endl;
                break;
            } if (sum == 7) {
                cout << "You lose" << endl;
                break;
            }
        }
    }

    return 0;
}*/

//problem 14 (24)
#include <cmath>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int reverseNum(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

int main() {
    int count = 0, num = 10;
    while (count < 100) {
        if (isPrime(num)) {
            int r = reverseNum(num);
            if (r != num && isPrime(r)) {
                cout << num << endl;
                count++;
                if (count % 10 == 0) cout << endl;
            }
        }
        num++;
    }
    return 0;
}

//problem 15 (26)

#include <string>
#include <cmath>
using namespace std;


int bin2Octal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    int octal = 0, place = 1;
    while (decimal > 0) {
        int rem = decimal % 8;
        octal += rem * place;
        place *= 10;
        decimal /= 8;
    }
    return octal;
}
int main() {
    string binStr;
    cout << "Enter binary number: ";
    cin >> binStr;

    int binary = 0;
    for (char c : binStr) {
        binary = binary * 10 + (c - '0');
    }

    cout << "Octal = " << bin2Octal(binary) << endl;

    return 0;
}




