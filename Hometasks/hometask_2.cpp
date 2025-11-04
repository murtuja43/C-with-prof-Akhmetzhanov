//
//  hometask_2.cpp
//  Hometasks
//
//  Created by Md Golam Murtuja Kayes on 11/4/25.
//

#include <iostream>
#include <cmath>
using namespace std;

//while 1
int main() {
    double A, B;
    cout << "Enter A and B: ";
    cin >> A >> B;

    while (A >= B) {
        A = A - B; // keep subtracting B
    }

    cout << "Unused part = " << A << endl;
    return 0;
}



//while 4
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    if (N <= 0) {
        cout << "FALSE";
        return 0;
    }

    while (N % 3 == 0) {
        N = N / 3;
    }

    if (N == 1)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}


//while 7
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int K = 1;

    while (K * K <= N) {
        K++;
    }

    cout << "K = " << K << endl;
    return 0;
}



//while 10
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int K = 0;
    int p = 1; // stores 3^K

    while (p * 3 < N) {
        p = p * 3;
        K++;
    }

    cout << "K = " << K << endl;
    return 0;
}



//while 13
int main() {
    double A;
    cout << "Enter A: ";
    cin >> A;

    int K = 1;
    double sum = 1.0;

    while (sum <= A) {
        K++;
        sum += 1.0 / K;
    }

    cout << "K = " << K << endl;
    cout << "Sum = " << sum << endl;
    return 0;
}



//while 16
int main() {
    double P;
    cout << "Enter P: ";
    cin >> P;

    double dayDistance = 10;
    double total = 10;
    int days = 1;

    while (total <= 200) {
        dayDistance = dayDistance + (dayDistance * P / 100);
        total = total + dayDistance;
        days++;
    }

    cout << "Days = " << days << endl;
    cout << "Total distance = " << total << endl;
    return 0;
}



//while 19
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int reversed = 0;

    while (N > 0) {
        int last = N % 10;
        reversed = reversed * 10 + last;
        N = N / 10;
    }

    cout << "Reversed number = " << reversed << endl;
    return 0;
}



//while 22
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int i = 2;
    bool isPrime = true;

    while (i * i <= N) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    cout << (isPrime ? "TRUE" : "FALSE") << endl;
    return 0;
}



//while 25
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int a = 1, b = 1, c = 0;

    while (c <= N) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "First Fibonacci number > N is " << c << endl;
    return 0;
}



//while 28
int main() {
    double eps;
    cout << "Enter ε: ";
    cin >> eps;

    double A_prev = 2.0;
    double A_curr = 2.0 + 1.0 / A_prev;
    int K = 2;

    while (fabs(A_curr - A_prev) >= eps) {
        A_prev = A_curr;
        A_curr = 2.0 + 1.0 / A_prev;
        K++;
    }

    cout << "K = " << K << endl;
    cout << "A_prev = " << A_prev << endl;
    cout << "A_curr = " << A_curr << endl;
    return 0;
}




//for 36-40

//For36
int main() {
    int N, K;
    cout << "Enter N and K: ";
    cin >> N >> K;

    double sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += pow(i, K);
    }

    cout << "Sum = " << sum << endl;
    return 0;
}


//For37
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    double sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += pow(i, i);
    }

    cout << "Sum = " << sum << endl;
    return 0;
}



//For38
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    double sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += pow(i, N - i + 1);
    }

    cout << "Sum = " << sum << endl;
    return 0;
}


//For39
int main() {
    int A, B;
    cout << "Enter A and B: ";
    cin >> A >> B;

    for (int i = A; i <= B; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}


//For40
int main() {
    int A, B;
    cin >> A >> B;
    for (int i = A; i <= B; i++) {
        for (int j = 1; j <= i - A + 1; j++) {
            cout << i << " ";
        }
    }
    return 0;
}
