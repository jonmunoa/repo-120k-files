// fichero 16421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16421;

Registro16421 crear_registro16421(int id) {
    Registro16421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16421(Registro16421 r) {
    return r.valor + r.id;
}
