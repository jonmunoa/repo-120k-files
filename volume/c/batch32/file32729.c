// fichero 32729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32729;

Registro32729 crear_registro32729(int id) {
    Registro32729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32729(Registro32729 r) {
    return r.valor + r.id;
}
