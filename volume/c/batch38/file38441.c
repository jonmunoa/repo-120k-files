// fichero 38441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38441;

Registro38441 crear_registro38441(int id) {
    Registro38441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38441(Registro38441 r) {
    return r.valor + r.id;
}
