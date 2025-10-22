//
//  main.cpp
//  Hometasks
//
//  Created by Md Golam Murtuja Kayes on 10/22/25.
//

#include <iostream>
#include <cmath>
using namespace std;

//for1
int main() {
    int K, N;
    cin >> K >> N;
    for (int i = 0; i < N; i++)
        cout << K << " ";
    return 0;
}


//for4
int main() {
    double price;
    cin >> price;
    for (int i = 1; i <= 10; i++)
        cout << i << " kg cost = " << i * price << endl;
    return 0;
}


//for7
int main() {
    int A, B, sum = 0;
    cin >> A >> B;
    for (int i = A; i <= B; i++)
        sum += i;
    cout << "Sum = " << sum;
    return 0;
}


//for10
int main() {
    int N;
    double sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
        sum += 1.0 / i;
    cout << "Sum = " << sum;
    return 0;
}


//for13
int main() {
    int N;
    double result = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        double term = 1.0 * i;
        if (i % 2 == 0) term = -term;
        result += term;
    }
    cout << "Result = " << result;
    return 0;
}


//for16
int main() {
    double A, power = 1;
    int N;
    cin >> A >> N;
    for (int i = 1; i <= N; i++) {
        power *= A;
        cout << "A^" << i << " = " << power << endl;
    }
    return 0;
}


//for19
int main() {
    int N;
    double fact = 1;
    cin >> N;
    for (int i = 1; i <= N; i++)
        fact *= i;
    cout << N << "! = " << fact;
    return 0;
}


//for22
int main() {
    double X, term = 1, sum = 1;
    int N;
    cin >> X >> N;
    for (int i = 1; i <= N; i++) {
        term *= X / i;
        sum += term;
    }
    cout << "Sum = " << sum;
    return 0;
}


//for25
int main() {
    double X, sum = 0;
    int N;
    cin >> X >> N;
    for (int i = 1; i <= N; i++) {
        double term = pow(-1, i - 1) * pow(X, i) / i;
        sum += term;
    }
    cout << "Sum = " << sum;
    return 0;
}


//for28
int main() {
    double X, sum = 1, term = 1, num = 1, den = 1;
    int N;
    cin >> X >> N;
    for (int i = 1; i <= N; i++) {
        term *= X;
        num *= (i == 1) ? 1 : (2 * i - 3);
        den *= (2.0 * i);
        double sign = (i % 2 == 0) ? -1 : 1;
        sum += sign * num * term / den;
    }
    cout << "Sum = " << sum;
    return 0;
}


//for31
int main() {
    int N;
    double A = 2; // A0 = 2
    cin >> N;
    for (int k = 1; k <= N; k++) {
        A = 2 + 1 / A;
        cout << "A" << k << " = " << A << endl;
    }
    return 0;
}


//for34
int main() {
    int N;
    cin >> N;
    double A1 = 1, A2 = 2, A;
    cout << "A1 = " << A1 << endl;
    if (N >= 2)
        cout << "A2 = " << A2 << endl;
    for (int k = 3; k <= N; k++) {
        A = (A1 + 2 * A2) / 3;
        cout << "A" << k << " = " << A << endl;
        A1 = A2;
        A2 = A;
    }
    return 0;
}


//for37
int main() {
    int N;
    double sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum += pow(i, i);
    }
    cout << "Sum = " << sum;
    return 0;
}


//for40
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

