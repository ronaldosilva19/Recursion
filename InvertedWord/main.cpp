#include <bits/stdc++.h>

using namespace std;

void InvertedWord(char s[], int size, int begin, int end){
    if(begin < end) {
        swap(s[begin], s[end]);
        InvertedWord(s, size, begin + 1, end - 1);
    }

}

int main() {
    char s[] = {'R', 'O', 'N', 'A', 'L', 'D', 'O'};
    int size = sizeof(s) / sizeof(s[0]);
    InvertedWord(s, size, 0, size - 1);
    for(int i = 0; i < size; i++){
        cout << s[i] << " " ;
    }
    return 0;
}
