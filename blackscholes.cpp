#include <iostream>

#include <vector>

#include <math.h>

using namespace std;

double f (double x) {

  double pi = 4.0 * atan (1.0);

  return exp (-x * x * 0.5) / sqrt (2 * pi);

}


// Boole's Rule

double Boole (double StartPoint, double EndPoint, int n) {

  vector < double >X (n + 1, 0.0);

  vector < double >Y (n + 1, 0.0);

  double delta_x = (EndPoint - StartPoint) / double (n);

  for (int i = 0; i <= n; i++) {

      X[i] = StartPoint + i * delta_x;

      Y[i] = f (X[i]);

}

  double sum = 0;

  for (int t = 0; t <= (n - 1) / 4; t++) {

      int ind = 4 * t;

      sum +=

  (1 / 45.0) * (14 * Y[ind] + 64 * Y[ind + 1] + 24 * Y[ind + 2] +

        64 * Y[ind + 3] + 14 * Y[ind + 4]) * delta_x;

    }

  return sum;
}