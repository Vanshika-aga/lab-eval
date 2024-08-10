#include <iostream>
using namespace std;


void print_polynomial(int coeffs[], int degree) {
    for (int i = 0; i <= degree; i++) {
        if (coeffs[i] != 0) {
            if (i > 0) printf(" + ");
           cout<< coeffs[i]<<"x^"<<degree - i;
        }
    }
    printf("\n");
}


void print_derivative(int coeffs[], int degree) {
   cout<<"Derivative: ";
    for (int i = 0; i < degree; i++) {
        if (coeffs[i] != 0) {
            if (i > 0) printf(" + ");
            cout<<coeffs[i] * (degree - i)<<"x^"<<degree - i - 1;
        }
    }
    if (degree == 0) {
        cout<<"0";
    }
   cout<<endl;
}

int main() {
    int degree;


cout<<"Enter the degree of the polynomial (0 to 5): "<<endl;
    cin>>degree;

    if (degree < 0 || degree > 5) {
       cout<<"Degree should be between 0 and 5"<<endl;
        return 1;
    }

    int coeffs[6] = {0};

 cout<<"Enter coefficients from the highest degree to the constant term";
    for (int i = 0; i <= degree; i++) {
        cout<<"Coefficient of x^"<<degree - i<<": ";
        cin>>coeffs[i];
    }
  printf("Polynomial: ");
    print_polynomial(coeffs, degree);


    print_derivative(coeffs, degree);

    return 0;
}

