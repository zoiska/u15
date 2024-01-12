#include <iostream>
#include <array>

using namespace std;

char aufgabe15_3_a(int a, int b, int c) {
    if(a > b) {
        if (a > c) {
            return 'a';
        }
        else {
            return 'c';
        }
    }
    else {
        if(b > c) {
            return 'b';
        }
        else {
            return 'c';
        }
    }
}

char aufgabe15_3_b(int a, int b, int c) {
    char erg = (a > b) ? ((a > c) ? 'a' : 'c') : ((b > c) ? 'b' : 'c');
    return erg;
}

void aufgabe_15_4(int mult){
    if(mult < 0) {
        cout << "Ungültige Eingabe!" << endl;
    }
    else {
        for(int i = 0; i <= mult; i++) {
            int erg = 4 * i;
            cout << erg << endl;
        }
    }
    printf("\n\n");
}

int aufgabe15_5(int i) {
    int summe;
    if( i < 0){
        cout << "Sie müssen eine Zahl größer null eingeben" << endl;
        return 0;
    }
    do{
        summe += i;
        i++;
    }
    while(i <= 99);
    return summe;
}

void aufgabe15_7_iter(int i, int k) {
    for(; i <= k; i++) {
        printf("%d\n", 6*i-1);
        printf("%d\n", 6*i+1);
    }
}

void aufgabe15_7_recur(int i, int k) {
    if(i > k) {}
    else {
        printf("%d\n", 6*i-1);
        printf("%d\n", 6*i+1);
        aufgabe15_7_recur(i + 1, k);
    }
}

short *odd_And_Even(short *array) {
    //short *arr2 = (short *)malloc(10 * sizeof(short));

}

int main() {
    short arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    short *ptr = arr;

    odd_And_Even(ptr);


    char x = aufgabe15_3_a(1, 2, 3);
    char y = aufgabe15_3_b(1, 2, 3);
    printf("%c, %c\n\n", x, y);

    aufgabe_15_4(4);

    printf("%d\n\n", aufgabe15_5(80));

    aufgabe15_7_iter(1, 5);

    aufgabe15_7_recur(1, 5);
    return 0;
}