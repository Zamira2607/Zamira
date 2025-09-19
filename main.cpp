#include <iostream>
using namespace std;

//problem 12
/*
int main() {
    int a,b,c;

    cout << "Enter three angles of a triangle:";
    cin >> a>>b>>c;
    if (a> 0 && b > 0 && c > 0 && (a+b+c == 180))
    cout << "Triangle is valid" << endl;
    else
cout << "Triangle is not valid" << endl;
    return 0;
}*/

//problem 13
/*
int main() {
    double a,b,c;

    cout << "Enter non-integer coefficients of quadratic equation:";
    cin >> a >> b >> c;
    double D = b*b - 4*a*c;

    if ( D <0)
        {cout << "No roots" << endl;}

    else {
        double root1 = (-b + sqrt(D)) / (2*a);
        double root2 = (b+ sqrt(D)) / (2*a);

        cout << "Root 1 is" <<root1<< endl;
        cout << "Root 2 is" <<root2<< endl;
    }
    return 0;
}*/

//problem 14
/*
int main() {
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
            cout << "Uppercase aphabet" << endl;
    else
            cout << "Lowercase alphabet" << endl;

     return 0;
     }*/

//problem 15
/*
int main() {
    double w1, w2, p1,p2;
    cout << "Enter weight and price for package 1:";
    cin >> w1 >> p1;
    cout << "Enter weight and price for package 2:";
    cin >> w2 >> p2;
    double pr1 = p1/w1;
    double pr2 = p2/w2;

    if (pr1>pr2) cout << "Package 2 has better price" << endl;
    else cout << "Package 1 has better price" << endl;
    if (pr1==pr2) cout << "Package 1 and Package 2 has equal price" << endl;
}*/

//problem 16
/*
int main() {
    int num;

    cout << "Enter a three-digit number: ";
    cin >> num;
    if (num < 100 || num > 999) {
        cout << "Please enter a valid three-digit number." << endl;}
    else {
        int first = num / 100;   // hundreds digit
        int last = num % 10;     // ones digit
        if (first == last) {
            cout << num << " is a palindrome." << endl;}
        else {
            cout << num << " is not a palindrome." << endl;}
    }

    return 0;
}*/

//problem 17
/*
int main() {
    char choice;

    cout << "Choose a language:" << endl;
    cout << "u - Uzbek" << endl;
    cout << "e - English" << endl;
    cout << "r - Russian" << endl;
    cout << "g - German" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 'u' ) {
        cout << "Salom!" << endl;   }
        else
            if (choice == 'e') {
            cout << "Hello!" << endl; }
            else
                if (choice == 'r' ) {
        cout << "Privet!" << endl; }
                else
                    if (choice == 'g' ) {
        cout << "Hallo!" << endl;   }
                    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}*/

//no number problem
/*
int main() {
    double gpa;
    cout << "Enter GPA (0.0 - 4.5): ";
    cin >> gpa;

    if (gpa >= 4.0 && gpa <= 4.5) {
        cout << "80% scholarship";
    }
    else if (gpa >= 3.5 && gpa < 4.0) {
        cout << "60% scholarship";
    }
    else if (gpa >= 3.0 && gpa < 3.5) {
        cout << "50% scholarship";
    }
    else {
        cout << "No scholarship";
    }

    return 0;
}*/

//problem 21
int main() {
    int day, month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    if (day == 1 && month == 1) {
        cout << "New Year (Yangi yil)";
    }
    else if (day == 8 && month == 3) {
        cout << "International Women's Day (Xotin-qizlar kuni)";
    }
    else if (day == 21 && month == 3) {
        cout << "Navruz Holiday (Navro‘z bayrami)";
    }
    else if (day == 9 && month == 5) {
        cout << "Day of Remembrance and Honor (Xotira va qadrlash kuni)";
    }
    else if (day == 1 && month == 9) {
        cout << "Independence Day (Mustaqillik kuni)";
    }
    else if (day == 1 && month == 10) {
        cout << "Teachers' and Mentors' Day (O‘qituvchi va murabbiylar kuni)";
    }
    else if (day == 8 && month == 12) {
        cout << "Constitution Day (Konstitutsiya kuni)";
    }
    else {
        cout << "This is not a national holiday in Uzbekistan.";
    }

    return 0;
}


