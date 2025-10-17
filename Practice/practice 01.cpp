//
//  practice.hpp
//  Class 3
//
//  Created by Md Golam Murtuja Kayes on 10/17/25.
//

/*
(PRACTICE 01)
 
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    char op;
    
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter operator (+, -, *, /): ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>b;
    
    switch (op) {
        case '+':
            cout<<"Result: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Result: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Result: "<<a*b<<endl;
            break;
        case '/':
            if (b!= 0)
                cout<<"Result: "<<a/b<<endl;
            else
                cout<<"Error: Division by zero";
            break;
        default:
            cout<<"Invalid operator!"<<endl;
            return 0;
    }
}

*/


/*
 PRACTICE 02
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int a,b;
    
    cout<<"Enter the first number A: "; cin>>a;
    cout<<"Enter the second number B: "; cin>>b;
    
    if (a > b)
        cout<<"A is greater than B"<<endl;
    else
        if (a==b)
            cout<<"A is equal to B"<<endl;
    else if (a < b)
        cout<<"A is less than B";
    return 0;
}
*/


#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a, b;
    char op;
    
    cout<<"Enter first number A: "; cin>>a;
    cout<<"Enter operator (+, -, *, /): "; cin>>op;
    cout<<"Enter second number B: "; cin>>b;
    
    switch (op) {
        case '+':
            cout<<"Result: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Result: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Result: "<<a*b<<endl;
            break;
        case '/':
            if (b!= 0)
                cout<<"Error: Division by zero"<<endl;
            else
            cout<<"Result: "<<a/b<<endl;
            break;
        default:
            cout<<"Error: Invalid"<<endl;
            break;
            
            return 0;
            
    }
                 
}
