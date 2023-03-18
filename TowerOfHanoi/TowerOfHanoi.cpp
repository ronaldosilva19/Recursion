//
// Created by ronal on 3/18/2023.
//

#include <bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int disk, const char source, const char auxiliary, const char destination){
    if(disk == 1){
        cout << "Movendo do disco " << source << " para o disco " << destination << "\n";
    }else{
        TowerOfHanoi(disk - 1, source, destination, auxiliary);
        cout << "Movendo do disco " << source << " para o disco " << destination << "\n";
        TowerOfHanoi(disk - 1, auxiliary, source, destination);
    }
}
int main(){
    int N;
    const char Towers[] = {'A', 'B', 'C'};
    cin >> N;
    if(N <= 0){
        cout << "Numero invalido!" << endl;
    }else{
        TowerOfHanoi(N, Towers[0], Towers[1], Towers[2]);
    }
    return 0;
}