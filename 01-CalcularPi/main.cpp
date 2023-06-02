#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
double pi;
double sum = 0;
int signo = 1;
int n = 1;
while (true)
{
    sum = sum+signo*(1/(double) (2*n-1));
    signo = -signo;
    n = n+1;
    if (abs (sum * 4 - 3.141592) < 0.0000001)
    {
        break;
    }
}
pi = 4*sum;
cout << setprecision (6) << fixed << pi << endl;
return 0;
}