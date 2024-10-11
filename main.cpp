#include <iostream>

using namespace std;

int main() {
  double a, b, c, d, e, f;

  cin >> a >> b >> c >> d >> e >> f;

  double determinant = (a * d - c * b);

  double x0 = (d * e - b * f) / determinant;
  double y0 = (a * f - c * e) / determinant;
  if (a == b && b == c && c == d && d == e && e == f) {
    cout << 5 << endl;
  }else if ((a/c == b/d  && a/c  != e/f ) || (c/a == d/b  && c/a  != f/e ) || (a == 0 && c == 0 && e/b != f/d)|| (b == 0 && d == 0 && e/a != f/c)) {
    cout << 0 << endl;
  }else if ((b == 0 && d == 0)) {
    if (a!=0) {
      cout << 3 << " " << e / a << endl;
    }else {
      cout << 3 << " " << f / c << endl;
    }
    }else if ((a == 0 && c == 0)) {
      if (b!=0){
        cout << 4 << " " << e / b << endl;
      }else {
        cout << 4 << " " << f/d << endl;
      }

    }else if (((a+b)/(c+d) == e/f || (c+d)/(a+b) == f/e) && a != d && b !=c) {
      cout << 1 << " " << -1*(a+c)/(b+d) <<  " " << (e + f)/(b + d) << endl;
      }else {
      cout << 2 << " " << x0 << " " << y0 << endl;
    }
  return 0;
}

