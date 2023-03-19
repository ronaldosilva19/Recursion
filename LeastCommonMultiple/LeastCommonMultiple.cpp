//
// Created by ronal on 3/19/2023.
//

#include <iostream>

using namespace std;

long long Gcd(long long int A, long long int B){
    if(B ==0){
      return A;
    }else{
      return Gcd(B, A % B);
    }
}

long long Lcm(long long int A, long long int B){
    return (A / Gcd(A, B)) * B;
}
int main(){

    cout << Lcm(15, 20) << "\n";
    return 0;
}