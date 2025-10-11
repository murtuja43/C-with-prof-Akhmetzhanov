//
//  main.cpp
//  Class 3
//
//  Created by Md Golam Murtuja Kayes on 10/11/25.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()

{
//    Question-1 (Boolean)
    /*
    int A, check;
    
    cout<<"A= ";
    cin >>A;
    
    check = (A > 0);
    
    cout <<"If positive 1, if negative 0. Output is = "<<check<<endl;
    return 0;
     */
    
    
    
//    Question-2 (Boolean)
    /*
    int A, check;
    cout << "A = ";
    cin >> A;
    check = (A % 2 != 0);
    cout << "If odd 1, if even 0. Output is = " << check << endl;
    return 0;
     */
    
    
//    Question-3 (Boolean)
    /*
    int A, check;
    cout << "A = ";
    cin >> A;
    check = (A % 2 == 0);
    cout << "If odd 0, if even 1. Output is = " << check << endl;
    return 0;
     */

    
//    Question-4 (Boolean)
    /*
    int A, B, ck1, ck2;
    cout <<"A= "; cin>>A;
    cout <<"B= "; cin>>B;
    
    ck1 = A > 2;
    ck2 = B <= 3;
    
    cout<<"is A greater than 2? Output is= "<<ck1<<endl;
    cout<<"is B greater than of equal 3? Output is= "<<ck2<<endl;
    return 0;
    */
    
//    Question-5 (Boolean)
    /*
    int A, B, ck1, ck2;
    cout <<"A= "; cin>>A;
    cout <<"B= "; cin>>B;
    
    ck1 = A >= 0;
    ck2 = B < -2;
    
    cout<<"is A greater than or equal 0? Output is= "<<ck1<<endl;
    cout<<"is B greater than -2? Output is= "<<ck2<<endl;
    return 0;
     */
    
    
    
//    Question-6 (Boolean)
    /*
    int A, B, C, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    cout<<"C= "; cin>>C;

    check = (A < B && B < C);
    cout << "If (A < B < C) true = 1, else 0. Output is = " << check << endl;
    return 0;
     */
    
    
//    Question-7 (Boolean)
    /*
    int A, B, C, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    cout<<"C= "; cin>>C;
    
    check = (A < B && B < C);
//something seems missing
    
    cout<<"If (A < B && B < C) true = 1, else 0. Output is = " << check << endl;
    return 0;
     */
  
//    Question-8 (Boolean)
    /*
    int A, B, check;
    
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    
    check = (A % 2 != 0) && (B % 2 !=0);
    
    cout<<"If both integers are odd output will be 1, or else 0. Output is= "<<check<<endl;
    return 0;
     */
    
    
    
//    Question-9 (Boolean)
    /*
    int A, B, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    
    check = (A % 2 != 0) || (B % 2 !=0);
    
    cout<<"If at least one is odd output will be true (1) or else 0. Output is= "<<check<<endl;
    return 0;
     
     
     
     
        int A, B, check;
         check = ((A % 2 != 0 && B % 2 == 0) || (A % 2 == 0 && B % 2 != 0));
         cout << "If exactly one is odd true = 1, else 0. Output is = " << check << endl;
         return 0;
     }

     */
    
//    Question-10 (Boolean)
    /*
    int A, B, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    
    check =((A % 2 != 0 && B % 2 == 0) || (A % 2 == 0 && B % 2 != 0));
    
    cout << "If exactly one is odd true = 1, else 0. Output is = " << check << endl;
    return 0;
     */
    

//    Question-11 (Boolean)
    /*
    int A, B, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    
    check = ((A % 2 != 0 && B % 2 != 0) || (A % 2 ==0 && B % 2 == 0));
    
    cout << "If both are either odd or even the output will be= 1, else 0. Output is = " << check << endl;
    return 0;
     */
    

//    Question-12 (Boolean)
    /*
    int A, B, C, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    cout<<"C= "; cin>>C;
    
    check = (A > 0 && B > 0 && C > 0);
    
    cout<<"If all are positive the output will be 1 or else 0. Output is= "<<check<<endl;
    return 0;
     */
    

//    Question-13 (Boolean)
    /*
    int A, B, C, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    cout<<"C= "; cin>>C;
    
    check = (A > 0 || B > 0 || C > 0);
    
    cout<<"If at least  one is positive the output will be 1 or else 0. Output is= "<<check<<endl;
    return 0;
     */
    
    

//    Question-14 (Boolean)
    /*
    int A, B, C, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    cout<<"C= "; cin>>C;
    
    check = ((A > 0 && B < 0 && C < 0) || (A < 0 && B > 0 && C < 0) || (A < 0 && B < 0 && C > 0));
    
    cout<<"If exactly one is positive the output will be 1 or else 0. Output is = "<<check<<endl;
    return 0;
     */
    
    
//    Question-15 (Boolean)
    /*
    int A, B, C, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    cout<<"C= "; cin>>C;
    
    check = ((A > 0 && B > 0 && C < 0) || (A < 0 && B > 0 && C > 0) || (A > 0 && B < 0 && C > 0));
    
    cout<<"If exactly two are positive the output will be 1 or else 0. Output is = "<<check<<endl;
    return 0;
     */
    
    
//    Question-16 (Boolean)
    /*
     int A, check;
     cout<<"A= "; cin>>A;
     
     check = (A <= 99 && A % 2 ==0);
     
     cout<<"If it's a 2 digit even number the output will be 1 or else 0. Output is= "<<check<<endl;
     return 0;
     */
    
    
//    Question-17 (Boolean)
    /*
    int A, check;
    cout<<"A= "; cin>>A;
    
    check = (A <= 999 && A >= 100 && A % 2 !=0);
    
    cout<<"If it's a 3 digit odd number the output will be 1 or else 0. Output is= "<<check<<endl;
    return 0;
    */
    
    
    
//    Question-18 (Boolean)
    /*
    int A, B, C, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    cout<<"C= "; cin>>C;
    
    check = (A == B || B == C || C == A);
    cout << "If at least one pair are equal, 1; else 0. Output is = " << check << endl;
    return 0;
     */
    

//    Question-19 (Boolean)
    /*
    int A, B, C, check;
    cout<<"A= "; cin>>A;
    cout<<"B= "; cin>>B;
    cout<<"C= "; cin>>C;
    
    check = (A + B == 0 || B + C == 0 || A + C == 0);
    
    
    cout << "If at least one pair are opposite (sum = 0), 1; else 0. Output is = " << check << endl;
    return 0;
    */
    
    
//    Question-20 (Boolean)
    /*
    int N, a, b, c, check;
    cout << "N = ";
    cin >> N;
    a = N / 100;
    b = (N / 10) % 10;
    c = N % 10;
    
    check = (a != b && b != c && a != c);
    cout << "If all digits are different, 1; else 0. Output is = " << check << endl;
    return 0;
     */
    

//    Question-21 (Boolean)
    
    
    
    
    
    /*
//    else if lecture
   
   if ()
   {
   f(x)
   }
   
   else
   {
   f1(x)
   }
   
   else if (x==0)
   {
   f2(x)
   }
   
   */
    
    
//    Swith:
    switch (a)
    {
        case 1:
            d++;
            break;
        case 2:
            d--;
            break;
    default;
        d=0;
    }
    cout<<d;
    
    
    
}
