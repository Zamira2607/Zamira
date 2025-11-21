#include <iostream>
using namespace std;
//problem 9
/*
int main() {
    int a = 1, b = 2, c = 3;

    int* ptrs[3] = { &a, &b, &c };

    for (int i = 0; i < 3; i++) {
        cout << *ptrs[i] << endl;
    }
    return 0;
}*/

//problem 10
/*
int main() {
    int arr[5] = {5,3,1,2,4};

    int* p = arr;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << endl;
    }

    return 0;
}*/

//problem 11
/*
int main() {
    const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    for (int i = 0; i < 4; i++) {
        cout << suit[i] << endl;
    }
    return 0;
}*/

//problem 12
/*
int main() {
    const char* days[3] = {"Mon", "Tue", "Wed"};

    for (int i = 0; i < 3; i++) {
        cout << *(*(days + i) + 1) << endl;
    }
    return 0;
}*/

//problem 13
/*
int main() {
    int deck[4][13] = {0};

    const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char* numbers[13] = {"Ace", "Two", "Three", "Four", "Five", "Six",
        "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    deck[0][0] = 1;
    deck[3][1] = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (deck[i][j] == 1) {
                cout << numbers[j] << suits[i] << endl;
            }
        }
    }
    return 0;
}*/

//problem 14
/*
int main() {
    const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char* numbers[13] = {"Ace", "Two", "Three", "Four", "Five", "Six",
                             "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    srand(time(0));
    for (int i = 0; i < 5; i++) {
        int suitIndex = rand() % 4;
        int numIndex = rand() % 13;
        cout << numbers[numIndex] << " " << suits[suitIndex] << endl;
    }

    return 0;
}*/

//problem 15
/*
void greet() {
    cout << "Hello from greet()" << endl;
}
void bye() {
    cout << "Goodbye from bye()" << endl;
}

int main() {
    void (*fptr)();
    fptr = greet;
    fptr();

    fptr = bye;
    fptr();

    return 0;
}*/

//problem 16
/*
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*fptr)(int, int);
    int x = 2, y = 5;

    fptr = add;
    cout << "Add: " << fptr(x, y) << endl;

    fptr = multiply;
    cout << "Multiply: " << fptr(x, y) << endl;

    return 0;
}*/

//problem 17
/*
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
void calculate(int (*op)(int, int), int x, int y) {
    cout << "Result: " << op(x, y) << endl;
}

int main() {
    int x = 2, y = 3;

    calculate(add, x, y);
    calculate(multiply, x, y);

    return 0;
}*/

//problem 18

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
int main() {
    int (*ops[])(int, int) = {add, multiply};

    int choice;
    int x = 2, y = 3;

    cout << "Select operation: 1 for add, 2 for multiply: ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        cout << ops[choice - 1](x, y) << endl;
    };

    return 0;
}










