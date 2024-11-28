#include <stdio.h>

int Retta (float x, float m, float y, float q) {
    return y == (x * m + q);
}

int main(void) {
    float x, m, y, q;
    printf("Inserisci il valore m: \n");
    scanf("%f", &m);
    printf("Inserisci il valore q: \n");
    scanf("%f", &q);


    printf("inserisci le coordinate dei punti (x e y):");
    scanf("%f,%f", &x,&y);

    if (Retta(x, y, m, q)) {
        printf("Il punto (%.2f, %.2f) appartiene alla retta y = %.2fx + %.2f\n", x, y, m, q);
    } else
    { printf("Il punto (%.2f, %.2f) non appartiene alla retta y = %.2fx + %.2f\n", x, y, m, q);





        return 0;
    }
}
