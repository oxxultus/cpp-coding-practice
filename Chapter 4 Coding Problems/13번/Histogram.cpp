#include "Histogram.h"

void Histogram::print() {
    // 현재 문자열 출력
    cout << str << endl << endl;
    
    // 총 알파벳 수 출력
    cout << "총 알파벳 수 " << getAlphabetSize() << endl << endl;

    // 알파벳 빈도수 계산
    countAlphabet();

    // 각 알파벳의 빈도수와 히스토그램 형태로 출력
    char ch = 'a';
    while (ch <= 'z') {
        cout << ch << " (" << alphabet[(int)ch - 'a'] << ")\t: ";
        for (int i = 0; i < alphabet[(int)ch - 'a']; i++) {
            cout << "*";
        }
        cout << endl;
        ch++;
    }
}

int Histogram::getAlphabetSize() {
    int cnt = 0;
    // 문자열을 순회하면서 알파벳인 경우 카운트 증가
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cnt++;
        }
    }
    return cnt; // 알파벳 개수 반환
}

// 책에서는 대문자를 소문자로 변환한 뒤 계산하라 했지만 이방법이 간단해서 체택,,
void Histogram::countAlphabet() {
    // 문자열을 순회하면서 알파벳 빈도수 계산
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            int ind = str[i] - 'A';
            alphabet[ind]++; // 대문자 알파벳의 빈도수 증가
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            int ind = str[i] - 'a';
            alphabet[ind]++; // 소문자 알파벳의 빈도수 증가
        }
    }
}
