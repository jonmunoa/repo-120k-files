// fichero 14729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14729;

Registro14729 crear_registro14729(int id) {
    Registro14729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14729(Registro14729 r) {
    return r.valor + r.id;
}
