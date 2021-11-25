#include <bits/stdc++.h>
using namespace std ;

int main () {
    int a,b,c ;
    cout << "Nhap a, b, c: " ;
    cin >> a >> b >> c ;

    float delta = b*b - 4*a*c ;

    bool limit_check = (a>=0) && (a<=1000) && (b>=0) && (b<=1000) && (c>=0) && (c<=1000) ;
    if (!limit_check) {
        cout << "Gia tri dau vao khong hop le" ;
        return 0;
    } 
    if (delta <  0) {
        cout << "Phuong trinh vo nghiem." << '\n' ;
    }
    else {
        if (delta == 0) {
            float x = - (b/(2*a)) ;
            cout << "Phuong trinh nghiem kep: " ;
            cout << setprecision(2) << fixed << x ;
        }
        else {
            float x1 = (- b - sqrt(delta)) / (2*a) ;
            float x2 = (- b + sqrt(delta)) / (2*a) ; 
            cout << "Phuong trinh 2 nghiem: " ;
            cout << setprecision(3) << fixed << x1 << " " ;
            cout << setprecision(3) << fixed << x2 ;
        }
    }

    return 0 ;
}