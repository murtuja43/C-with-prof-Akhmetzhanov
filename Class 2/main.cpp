//
//  main.cpp
//  Class 2
//
//  Created by Md Golam Murtuja Kayes on 10/4/25.
//



#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    cout<<"Hello prof Akhmetzhanov";
    cout<<"Hello world"<<endl;
    cout<<"New line Hello world"<<endl<<endl;
    
    
    //    problem 1: Begin1 (from book)
    /*
     int a, P, Pi;
     a = 5;
     Pi = 3.14;
     cout<<"a= ";
     cin>>a;
     P = 4 * a;
     cout<<"P= "<<P<<endl;
     return 0;
     */
    
    
    
    //    prolem 2: Begin2 (from book)
    /*
     int a, S;
     cout<<"a = ";
     cin>>a;
     S = pow(a, 2);
     cout<<"S= "<<S<<endl;
     return 0;
     */
    
    
    //    problem 3: Begin3 (from book)
    /*
     int a, b, S, P;
     cout<<"a= ";
     cin>>a;
     cout<<"b= ";
     cin>>b;
     
     S = a * b;
     P = 2*(a+b);
     cout<<"S= "<<S<<endl;
     cout<<"P= "<<P<<endl;
     return 0;
     */
    
    
    //problem 4: Begin4 (from book)
    /*
     int d, pi, L;
     cout<<"d= ";
     cin>>d;
     pi = 3.14;
     L = pi * d;
     cout<<"L= "<<L<<endl;
     return 0;
     */
    
    
    //problem 5: Begin5 (from book)
    /*
     int a, V, S;
     cout<<"a= ";
     cin>>a;
     V = pow(a,3);
     S = 6*(pow(a,2));
     cout<<"V= "<<V<<endl;
     cout<<"S= "<<S<<endl;
     return 0;
     */
    
    
    //problem 6: Begin6 (from book)
    /*
     float a, b, c, V, S;
     cout<<"a= ";
     cin>>a;
     cout<<"b= ";
     cin>>b;
     cout<<"c= ";
     cin>>c;
     
     V = (a * b * c);
     S = 2*((a*b)+(b*c)+(a*c));
     
     cout<<"V= "<<V<<endl;
     cout<<"S= "<<S<<endl;
     return 0;
     */
    
    
    //prbolem 7: Begin7 (from book)
    /*
     float R, L, S, pi;
     cout<<"R= ";
     cin>>R;
     pi = 3.14;
     
     L = 2 * pi * R;
     S = pi * (pow(R, 2));
     
     cout<<"L= "<<L<<endl;
     cout<<"R= "<<S<<endl;
     return 0;
     */
    
    
    //prbolem 8: Begin8 (from book)
    /*
     float a, b, arithmean; //we can use "double" insted of float too
     cout<<"a= ";
     cin>>a;
     cout<<"b= ";
     cin>>b;
     
     arithmean = (a+b)/2;
     cout<<"Arithmetic mean= "<<arithmean<<endl;
     return 0;
     */
    
    
    //prbolem 9: Begin9 (from book)
    /*
     int a, b, S;
     cout<<"a= ";
     cin>>a;
     cout<<"b= ";
     cin>>b;
     
     S= sqrt(a*b);
     cout<<"Squre Root= "<<S<<endl;
     return 0;
     */
    
    
    //prbolem 10: Begin10 (from book)
    /*
    int a, b, sum, difference, product, quotient, sqa, sqb;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    
    sqa= pow(a, 2);
    sqb= pow(b, 2);
    
    sum = sqa + sqb;
    difference= sqa - sqb;
    product= sqa * sqb;
    quotient= sqa / sqb;
     */
    
    //    skip 5 for next ones

    
    
    //prbolem 15: Begin10 (from book)
    /*
    float S, R, D, L, pi;
    pi = 3.14;

    cout << "S = ";
    cin >> S;

    R = sqrt(S / pi);
    D = 2 * R;
    L = 2 * pi * R;

    cout << "Diameter (D) = " << D << endl;
    cout << "Circumference (L) = " << L << endl;

    return 0;
     */
    
    //prbolem 20: Begin10 (from book)
    /*
    float x1, y1, x2, y2, d;

    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Distance = " << d << endl;

    return 0;
     */
    
    
    //prbolem 25: Begin10 (from book)
    /*
    float x, y;
    cout << "x = ";
    cin >> x;

    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    cout << "y = " << y << endl;

    return 0;
     */
    
    
    //prbolem 30: Begin10 (from book)
    /*
    float alpha_rad, alpha_deg, pi;
    pi = 3.14;

    cout << "Alpha (in radians) = ";
    cin >> alpha_rad;

    alpha_deg = (alpha_rad * 180) / pi;

    cout << "Alpha (in degrees) = " << alpha_deg << endl;

    return 0;
     */
    
    //prbolem 35: Begin10 (from book)
    /*
    float V, U, T1, T2, S;

    cout << "V (boat speed) = ";
    cin >> V;
    cout << "U (river speed) = ";
    cin >> U;
    cout << "T1 (time on lake) = ";
    cin >> T1;
    cout << "T2 (time against current) = ";
    cin >> T2;

    S = V * T1 + (V - U) * T2;

    cout << "Total distance (S) = " << S << " km" << endl;

    return 0;
     */
    
    
    //prbolem 40: Begin10 (from book)
    /*
    float A1, B1, C1, A2, B2, C2, D, x, y;

    cout << "A1 = "; cin >> A1;
    cout << "B1 = "; cin >> B1;
    cout << "C1 = "; cin >> C1;
    cout << "A2 = "; cin >> A2;
    cout << "B2 = "; cin >> B2;
    cout << "C2 = "; cin >> C2;

    D = A1 * B2 - A2 * B1;
    x = (C1 * B2 - C2 * B1) / D;
    y = (A1 * C2 - A2 * C1) / D;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
     */
    
}
