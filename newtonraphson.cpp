#include<bits/stdc++.h>
using namespace std;

double f(double x){
	return x * x - 4 * x - 10;
}

double df(double x){
	return 2 * x - 4;
}

int main(){

	double x0, x1, e;

	cout << "enter initial guess ";
	cin >> x0;

	cout << "enter tolerable error "; 
	cin >> e;

	while(true){

		if(df(x0) == 0){
			cout << "mathmetical error" << endl;
			return 0;
		}

		x1 = x0 - (f(x0)/ df(x0));

		if(fabs(f(x1)) <= e){

			break;
		}

		x0 = x1;
	}

	cout << "root " << x1 << endl;
	return 0;

}