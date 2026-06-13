// fichero 8589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8589;

Registro8589 crear_registro8589(int id) {
    Registro8589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8589(Registro8589 r) {
    return r.valor + r.id;
}
