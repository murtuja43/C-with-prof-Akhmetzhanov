#include <iostream>
#include <cmath>
using namespace std;

/*
 January-31
 February-28
 March-31
 April-30
 May-31
 June-30
 July-31
 August-31
 September-30
 October-31
 November-30
 December-31
 */


//CASE PROBLEM- 08 (from book)
int main(){
    int D, M, prevDay, prevMonth;
    cout<<"Enter Day: "; cin>>D;
    cout<<"Enter month: "; cin>>M;
    
    /*d=d-1;
    if d=0
        m=m-1
        m=0
        m=12
     do like this and the code will be shorter (professor said)
     */
    switch (M) {
        case 1: // January
            if (D == 1) {
                prevDay = 31;
                prevMonth = 12;
            }
            else {
                prevDay = D - 1;
                prevMonth = 1;
            }
            break;
            
        case 2: // February
            if (D == 1) {
                prevDay = 31;
                prevMonth = 1;
            }
            else {
                prevDay = D - 1;
                prevMonth = 2;
            }
            break;
        
        case 3: // March
            if (D == 1) {
                prevDay = 28; // February has 28 days (non-leap year)
                prevMonth = 2;
            }
            else {
                prevDay = D - 1;
                prevMonth = 3;
            }
            break;
        
        case 4: // April
            if (D == 1) {
                prevDay = 31;
                prevMonth = 3;
            }
            else {
                prevDay = D - 1;
                prevMonth = 4;
            }
            break;
        
        case 5: // May
            if (D == 1) {
                prevDay = 30;
                prevMonth = 4;
            }
            else {
                prevDay = D - 1;
                prevMonth = 5;
            }
            break;
        
        case 6: // June
            if (D == 1) {
                prevDay = 31;
                prevMonth = 5;
            }
            else {
                prevDay = D - 1;
                prevMonth = 6;
            }
            break;
        
        case 7: // July
            if (D == 1) {
                prevDay = 30;
                prevMonth = 6;
            }
            else {
                prevDay = D - 1;
                prevMonth = 7;
            }
            break;
        
        case 8: // August
            if (D == 1) {
                prevDay = 31;
                prevMonth = 7;
            }
            else {
                prevDay = D - 1;
                prevMonth = 8;
            }
            break;
            
        case 9: //September
            if (D == 1) {
                prevDay= 31;
                prevMonth= 8;
            }
            else {
                prevDay= D - 1;
                prevMonth= 9;
            }
        
        case 10: // October
            if (D == 1) {
                prevDay = 30;
                prevMonth = 9;
            }
            else {
                prevDay = D - 1;
                prevMonth = 10;
            }
            break;
        
        case 11: // November
            if (D == 1) {
                prevDay = 31;
                prevMonth = 10;
            }
            else {
                prevDay = D - 1;
                prevMonth = 11;
            }
            break;
        
        case 12: // December
            if (D == 1) {
                prevDay = 30;
                prevMonth = 11;
            }
            else {
                prevDay = D - 1;
                prevMonth = 12;
            }
            break;
        
        default:
            cout << "Invalid month" << endl;
            return 0;
            }
        
        cout<<"Previous Date: "<<prevDay<<"."<<prevMonth<<endl;
        return 0;
        
}



//TASK: for next day learn "for"
