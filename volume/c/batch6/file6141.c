// fichero 6141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6141;

Registro6141 crear_registro6141(int id) {
    Registro6141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6141(Registro6141 r) {
    return r.valor + r.id;
}
