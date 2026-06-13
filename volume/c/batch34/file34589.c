// fichero 34589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34589;

Registro34589 crear_registro34589(int id) {
    Registro34589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34589(Registro34589 r) {
    return r.valor + r.id;
}
