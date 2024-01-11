#include <iostream>

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
        printf("Ungültige Eingabe!\n\n");
    }
    else {
        for(int i = 0; i <= mult; i++) {
            int erg = 4 * i;
            printf("%d, ", erg);
        }
    }
    printf("\n\n");
}

int aufgabe15_5(int i) {
    int summe;
    if( i < 0){
        puts("Sie müssen eine Zahl größer null eingeben");
        return 0;
    }
    do{
        summe += i;
        i++;
    }
    while(i <= 99);
    return summe;
}

long long max(int a, short b, long c, long long d, char e){
    if(a > b){
        if(a > c){
            if(a > d){
                if(a > e){
                    return a;
                }
                else {
                    return e;
                }
            }
            else {
                return d;
            }
        }
        else {
            return c;
        }
    }
    else if(b > c){
        if(b > d){
            if(b > e){
                return b;
            }
            else {
                return e;
            }
        }
        else {
           return d;
        }
    }
    else if(c > d){
        if(c > e){
            return c;
        }
        else {
            return e;
        }
    }
    else {
        return d;
    }
}

int main() {
    char x = aufgabe15_3_a(1, 2, 3);
    char y = aufgabe15_3_b(1, 2, 3);
    printf("%c, %c\n\n", x, y);

    aufgabe_15_4(4);

    printf("%d", aufgabe15_5(80));
    return 0;
}