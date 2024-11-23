#include <iostream>
#include <string>
using namespace std ;

int main() {
    // ประกาศตัวแปรเพื่อเก็บชื่อ
    string firstName, lastName ;
    
    // รับชื่อจากผู้ใช้
    cout << "First Name: " ;
    cin >> firstName ;
    cout << "Last Name: " ;
    cin >> lastName ;
    
    // แสดงผลลัพธ์
    cout << firstName << " " << lastName << "s TC, RMUTL, Chiang Mai, Thailand" << endl ;
    
    return 0 ;
}
