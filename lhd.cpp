//code to find pi to the nth digit


#include "bits/stdc++.h"
using namespace std;

void my_func(int N)
{
	double pi = 2 * acos(0.0);
	printf("%.*lf\n", N, pi);
}


int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
	my_func(n);
	return 0;
}
