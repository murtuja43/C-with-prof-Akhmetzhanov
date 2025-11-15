//
//  main.cpp
//  Class 6 (I was absent-fever) (series)
//
//  Created by Md Golam Murtuja Kayes on 11/14/25.
//

#include <iostream>
#include <cmath>
using namespace std;


//(N.B: I was absent in the class as I had fever (08.11.2025) These are the hometask)
//Series 1
int main() {
    double x, sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        sum += x;
    }
    cout << sum;
    return 0;
}


//Series 4
int main() {
    int N;
    cin >> N;
    double x, sum = 0, prod = 1;
    for (int i = 0; i < N; i++) {
        cin >> x;
        sum += x;
        prod *= x;
    }
    cout << sum << " " << prod;
    return 0;
}



//Series 7
int main() {
    int N, r, sum = 0;
    cin >> N;
    double x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        r = round(x);
        cout << r << " ";
        sum += r;
    }
    cout << sum;
    return 0;
}



//Series 10
int main() {
    int N, x;
    cin >> N;
    bool ok = false;

    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x > 0) ok = true;
    }

    cout << (ok ? "TRUE" : "FALSE");
    return 0;
}



//Series 13
int main() {
    int x, sum = 0;

    while (cin >> x && x != 0) {
        if (x > 0 && x % 2 == 0) sum += x;
    }

    cout << sum;
    return 0;
}


//Series 16
int main() {
    int K, x, index = 0, i = 1;
    cin >> K;

    while (cin >> x && x != 0) {
        if (x > K) index = i;
        i++;
    }

    cout << index;
    return 0;
}



//Series 19
int main() {
    int N;
    cin >> N;

    int a, prev, cnt = 0;
    cin >> prev;

    for (int i = 2; i <= N; i++) {
        cin >> a;
        if (a < prev) {
            cout << a << " ";
            cnt++;
        }
        prev = a;
    }

    cout << cnt;
    return 0;
}



//Series 22
int main() {
    int N;
    cin >> N;
    double prev, cur;

    cin >> prev;
    for (int i = 2; i <= N; i++) {
        cin >> cur;
        if (cur >= prev) {
            cout << i;
            return 0;
        }
        prev = cur;
    }

    cout << 0;
    return 0;
}



//Series 25
int main() {
    int N, x;
    cin >> N;

    int first = -1, last = -1;
    int a[1000];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            if (first == -1) first = i;
            last = i;
        }
    }

    if (last - first <= 1) {
        cout << 0;
        return 0;
    }

    int sum = 0;
    for (int i = first + 1; i < last; i++)
        sum += a[i];

    cout << sum;
    return 0;
}



//Series 28
int main() {
    int N;
    cin >> N;
    double A[1000];

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++)
        cout << pow(A[i], N - i) << " ";

    return 0;
}



//Series 31
int main() {
    int K, N;
    cin >> K >> N;

    int cntSets = 0;

    for (int i = 0; i < K; i++) {
        bool has2 = false;
        int x;
        for (int j = 0; j < N; j++) {
            cin >> x;
            if (x == 2) has2 = true;
        }
        if (has2) cntSets++;
    }

    cout << cntSets;
    return 0;
}



//Series 34
int main() {
    int K, N;
    cin >> K >> N;

    while (K--) {
        int x, sum = 0;
        bool has2 = false;

        for (int i = 0; i < N; i++) {
            cin >> x;
            sum += x;
            if (x == 2) has2 = true;
        }

        cout << (has2 ? sum : 0) << " ";
    }

    return 0;
}



//Series 37
int main() {
    int K;
    cin >> K;

    int countGood = 0;

    while (K--) {
        int x, prev;
        bool increasing = true, decreasing = true;

        cin >> prev;
        while (cin >> x && x != 0) {
            if (x <= prev) increasing = false;
            if (x >= prev) decreasing = false;
            prev = x;
        }

        if (increasing || decreasing) countGood++;
    }

    cout << countGood;
    return 0;
}



//Series 40
