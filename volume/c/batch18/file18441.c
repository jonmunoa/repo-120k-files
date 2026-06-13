// fichero 18441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18441;

Registro18441 crear_registro18441(int id) {
    Registro18441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18441(Registro18441 r) {
    return r.valor + r.id;
}
