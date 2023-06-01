#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
double pi;
int signo = 1;
double sum = 0;
int itera = 1000000;
int n = 1;
while (n<=itera)
{
    sum = sum+signo*(1/(double) (2*n-1));
    signo = -signo;
    n = n+1;
}
pi = 4*sum;
cout << setprecision (6) << fixed << pi << endl;
return 0;
}