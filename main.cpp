#include <iostream>
using namespace std;

//problem 6
/*
int main() {
    int frequency[26] = {0};
    char x;

    cout << " Enter a number ending with 0 : ";
    while (cin >> x && x != '0') {
        if (x >= 'a' && x <= 'z')
            frequency[x - 'a']++;
    }

    cout << "Frequencies:";
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0)
            cout << char('a' + i) << ": " << frequency[i] << endl;
    }
    return 0;
}*/

//problem 7
/*
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << "";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}*/


//problem 8
/*
int main() {
    const int rolls = 10000;
    int count[7] = {0};

    srand(time(0));

    for (int i = 0; i < rolls; i++) {
        int face = rand() % 6 + 1;
        count[face]++;
    }

    cout << "Results" << rolls << endl;
    for (int i = 1; i <= 6; i++) {
        cout << "Face " << i << ": " << count[i] << endl;
    }

    return 0;
}*/

//problem 9
/*
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse(arr, 0, n - 1);

    cout << "";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}*/

//problem 10

int main() {
    int n;
    cout << "How many numbers would you like to sort?";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "Please enter " << i + 1 << " number: ";
        cin >> a[i];
    }

    bool sortedNumbers = true;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sortedNumbers = false;
            break;
        }
    }

    if (sortedNumbers)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}