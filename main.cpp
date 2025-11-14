#include <iostream>
using namespace std;

//problem 1
/*
int max(int *arr, int size) {
    int maxVal = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > maxVal) {
            maxVal = *(arr + i);
        }
    }
    return maxVal;
}
int main() {
    int heights[] = {150, 165, 172, 160, 180};
    int size = 5;

    int maximum = max(heights, size);
    cout << "Maximum Height: " << maximum << endl;
    return 0;
}*/

//problem 2
/*
int main() {
    int a, b;
    int *ptrA, *ptrB;

    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    ptrA = &a;
    ptrB = &b;

    cout << "Value of a using ptrA: " << *ptrA << endl;
    cout << "Value of b using ptrB: " << *ptrB << endl;

    return 0;
}*/

//problem 3
/*
int main() {
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << endl;
        cin >> arr[i];
    }
    int *ptrMax = arr;
    for (int i = 1; i < n; i++) {
        if (arr[i] > *ptrMax) {
            ptrMax = &arr[i];
        }
    }

    cout << "Pointer to max value: " << ptrMax << endl;

    delete[] arr;
    return 0;
}*/

//problem 4

/*
#define val 33.3
#define number 50
int a;
int& fun(){
    return a;
}
int foo(){
    return a;
}
int main() {
    int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
    double t;

    ptr_1 = &n1;
    *ptr_1 += 3;

    ptr_2 = &n2;
    *ptr_2 += 1;

    t = val - 1;
    fun() = number;

    k = n1 - 4;

    cout << a << " " << n1 << " " << t << " " << k << endl;

    return 0;
}*/

//problem 5
/*
int main() {
    int arr[10];
    int *ptrA;

    srand(time(0));

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    ptrA = arr;

    for (int i = 0; i < 10; i++) {
        cout << "Address: " << (ptrA + i) << endl;
         cout << "Value: " << *(ptrA + i) << endl;
    }

    return 0;
}*/

//problem 6
/*
int main() {
    int message = 42;
    int *ptr = &message;

    cout << "Secret message: " << *ptr << endl;

    return 0;
} */

//problem 8
/*
int main() {
    int treasures[] = {10, 20, 30, 40, 50};
    int *ptr = treasures;

    ptr += 4;

    cout << "Last treasure value: " << *ptr << endl;
    return 0;
}*/

//problem 9
/*
int main() {
    int score = 75;
    int *ptr = &score;
    cout << "Original score: " << *ptr << endl;

    *ptr += 10;
    cout << "Updated score: " << *ptr << endl;

    return 0;
}*/

//problem 10
/*
void reverse(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    reverse(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    return 0;
}*/

//problem 11

int main() {
    int scores[] = {50, 60, 70, 80, 90};
    int size = 5;

    int *first = &scores[0];
    int *second = &scores[0];
    int *third = &scores[0];

    for (int i = 0; i < size; i++) {
        int *ptr = &scores[i];
        if (*ptr > *first) {
            third = second;
            second = first;
            first = ptr;
        } else if (*ptr > *second && *ptr < *first) {
            third = second;
            second = ptr;
        } else if (*ptr > *third && *ptr < *second) {
            third = ptr;
        }
    }

    cout << *first << " " << *second << " " << *third << endl;
    return 0;
}







