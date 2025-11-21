//
//  Hometasks
//
//  Created by Md Golam Murtuja Kayes on 11/16/25.
//

#include <iostream>
#include <cmath>
using namespace std;


/*
//array 1
int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        arr[i] = 2 * i + 1;  // formula for odd numbers
        cout << arr[i] << " ";
    }

   
    return 0;
}
*/

/*
//Array 6
int main() {
    int N;
    int A;
    int B;
    cin >> N >> A >> B;

    int arr[N];
    arr[0] = A;
    arr[1] = B;
    
    int sum_prev = A + B;

    cout << arr[0] << " ";
    cout << arr[1] << " ";

    for (int i = 2; i < N; ++i) {
        arr[i] = sum_prev;
        sum_prev += arr[i];
        cout << arr[i] << " ";
    }
    
    return 0;
}
 */



/*
//Array 11
int main() {
    int N;
    int K;
    cin >> N >> K;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    for (int i = 1; i * K <= N; ++i) {
        cout << A[i * K - 1] << " ";
    }
    
    return 0;
}
 */


/*
//Array 16
int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    int left = 0;
    int right = N - 1;
    
    while (left <= right) {
        cout << A[left] << " ";
        if (left < right) {
            cout << A[right] << " ";
        }
        left++;
        right--;
    }
    
    return 0;
}
 */

/*
//Array 21
#include <iomanip>

int main() {
    int N;
    int K;
    int L;
    cin >> N >> K >> L;

    double A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    double sum = 0.0;
    for (int i = K - 1; i < L; ++i) {
        sum += A[i];
    }
    
    double count = L - K + 1;
    double average = sum / count;

    cout << fixed << setprecision(2) << average << endl;
    
    return 0;
}
 */

/*
//Array 26

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (N < 2) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < N - 1; ++i) {
        if (abs(A[i] % 2) == abs(A[i + 1] % 2)) {
            cout << i + 2 << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
    
    return 0;
}
 */



/*
//Array 31
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (N < 2) {
        cout << 0 << endl;
        return 0;
    }
    
    vector<int> indices;
    
    for (int i = 1; i < N; ++i) {
        if (A[i] > A[i - 1]) {
            indices.push_back(i + 1);
        }
    }
    
    cout << indices.size() << endl;
    for (int i = indices.size() - 1; i >= 0; --i) {
        cout << indices[i] << " ";
    }
    cout << endl;
    
    return 0;
}
 */

/*
//Array 36
#include <algorithm>
#include <limits>

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (N < 3) {
        cout << 0 << endl;
        return 0;
    }
    
    int max_neither = numeric_limits<int>::min();
    bool found = false;
    
    for (int i = 1; i < N - 1; ++i) {
        bool is_local_min = (A[i] < A[i - 1]) && (A[i] < A[i + 1]);
        bool is_local_max = (A[i] > A[i - 1]) && (A[i] > A[i + 1]);
        
        if (!is_local_min && !is_local_max) {
            max_neither = max(max_neither, A[i]);
            found = true;
        }
    }
    
    if (found) {
        cout << max_neither << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}
 */


/*
//Array 41
#include <algorithm>
#include <limits>

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (N < 2) {
        return 0;
    }
    
    int max_sum = numeric_limits<int>::min();
    int index_of_first = -1;
    
    for (int i = 0; i < N - 1; ++i) {
        int current_sum = A[i] + A[i + 1];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
            index_of_first = i;
        }
    }
    
    cout << A[index_of_first] << " " << A[index_of_first + 1] << endl;
    
    return 0;
}
 */


/*
//Array 46
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    int N;
    int R;
    cin >> R >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (N < 2) {
        return 0;
    }
    
    long long min_diff = numeric_limits<long long>::max();
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int current_sum = A[i] + A[j];
            long long current_diff = abs((long long)current_sum - R);
            
            if (current_diff < min_diff) {
                min_diff = current_diff;
                index1 = i;
                index2 = j;
            }
        }
    }
    
    cout << A[index1] << " " << A[index2] << endl;
    
    return 0;
}
 */

/*
//Array 51
#include <vector>
#include <algorithm>
int main() {
    int M;
    cin >> M;

    vector<int> A(M);
    vector<int> B(M);

    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }
    
    A.swap(B);
    
    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    for (int val : B) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */

/*
//Array 56
#include <vector>

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    vector<int> B;
    
    for (int i = 1; 3 * i <= N; ++i) {
        B.push_back(A[3 * i - 1]);
    }

    cout << B.size() << endl;
    for (int val : B) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */


/*
//Array 61
#include <vector>
#include <iomanip>
int main() {
    int N;
    cin >> N;

    vector<double> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (N == 0) return 0;
    
    vector<double> B(N);
    
    for (int K = 1; K <= N; ++K) {
        double sum = 0.0;
        for (int i = K - 1; i < N; ++i) {
            sum += A[i];
        }
        
        double count = N - K + 1;
        B[K - 1] = sum / count;
    }

    cout << fixed << setprecision(2);
    for (double val : B) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */

/*
//Array 66
#include <vector>
#include <algorithm>
int main() {
    int M;
    cin >> M;

    vector<int> A(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }
    
    int first_even = -1;
    
    for (int val : A) {
        if (val % 2 == 0) {
            first_even = val;
            break;
        }
    }
    
    if (first_even != -1) {
        for (int& val : A) {
            if (val % 2 == 0) {
                val += first_even;
            }
        }
    }
    
    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */

/*
//Array 71
#include <vector>
#include <algorithm>
int main() {
    int M;
    cin >> M;

    vector<int> A(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }
    
    reverse(A.begin(), A.end());
    
    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */


/*
//Array 76
#include <vector>

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (N < 3) {
        for (int val : A) {
            cout << val << " ";
        }
        return 0;
    }
    
    for (int i = 1; i < N - 1; ++i) {
        if (A[i] > A[i - 1] && A[i] > A[i + 1]) {
            A[i] = 0;
        }
    }

    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */


/*
//Array 81
#include <vector>
#include <algorithm>

int main() {
    int N;
    int K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (K < 1 || K >= N) {
        return 0;
    }
    
    for (int i = N - 1; i >= K; --i) {
        A[i] = A[i - K];
    }
    
    for (int i = 0; i < K; ++i) {
        A[i] = 0;
    }

    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */


/*
//Array 86
#include <vector>
#include <algorithm>

int main() {
    int N;
    int K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (K < 1 || K >= N) {
        for (int val : A) {
            cout << val << " ";
        }
        return 0;
    }
    
    vector<int> temp(K);
    for (int i = 0; i < K; ++i) {
        temp[i] = A[i];
    }
    
    for (int i = 0; i < N - K; ++i) {
        A[i] = A[i + K];
    }
    
    for (int i = 0; i < K; ++i) {
        A[N - K + i] = temp[i];
    }

    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */


/*
//Array 91
#include <vector>
#include <algorithm>

int main() {
    int N;
    int K;
    int L;
    cin >> N >> K >> L;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (K < 1 || L > N || K >= L) {
        cout << N << endl;
        for (int val : A) {
            cout << val << " ";
        }
        return 0;
    }
    
    A.erase(A.begin() + K - 1, A.begin() + L);

    cout << A.size() << endl;
    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */


/*
//Array 96
#include <vector>
#include <unordered_set>

int main() {
    int M;
    cin >> M;

    vector<int> A(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }
    
    unordered_set<int> seen;
    vector<int> result;
    
    for (int val : A) {
        if (seen.find(val) == seen.end()) {
            seen.insert(val);
            result.push_back(val);
        }
    }
    
    A = move(result);
    
    cout << A.size() << endl;
    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */



/*
//Array 101
#include <vector>
#include <algorithm>

int main() {
    int N;
    int K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    if (K < 1 || K > N) {
        return 0;
    }
    
    A.insert(A.begin() + K - 1, 0);

    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */


/*
//Array 106
#include <iostream>

int main() {
    int M;
    cin >> M;

    vector<int> A(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }
    
    vector<int> B;
    
    for (int i = 0; i < M; ++i) {
        B.push_back(A[i]);
        if ((i + 1) % 2 == 0) {
            B.push_back(A[i]);
        }
    }
    
    for (int val : B) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */


/*
//Array 111
#include <iostream>

int main() {
    int M;
    cin >> M;

    vector<int> A(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }
    
    vector<int> B;
    
    for (int val : A) {
        if (val % 2 != 0) {
            B.push_back(val);
            B.push_back(val);
            B.push_back(val);
        } else {
            B.push_back(val);
        }
    }
    
    for (int val : B) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 */

