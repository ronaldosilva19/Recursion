//
// Created by ronal on 3/19/2023.
//

#include <iostream>
#include <vector>

using namespace std;

int Gcd(int a, int b){
    if(a == 0){
        return b;
    }else{
        return Gcd(b % a, a);
    }
}

int FindGcdArray(int arr[], int N){
    int result = arr[0];

    for(int i = 1; i < N; i++){
        result = Gcd(arr[i], result);
        if(result == 1){
            return 1;
        }
    }
    return result;
}
int main(){
    int arr[] = { 2, 4, 6, 8, 16, 35 };
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << FindGcdArray(arr, s) << "\n";
    return 0;
}