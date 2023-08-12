/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number :" << endl;
    cin >> n;

    int series = 0;
    int sum = 0;
    int multiplier = 1;

    do {
        series += 9 * multiplier;
        sum += series;
        multiplier *= 10;

        if (multiplier <= n) {
            cout << series << " + ";
        } else {
            cout << series;
        }
    } while (multiplier <= n);

    cout << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}
