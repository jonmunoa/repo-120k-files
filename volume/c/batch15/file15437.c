// fichero 15437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15437;

Registro15437 crear_registro15437(int id) {
    Registro15437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15437(Registro15437 r) {
    return r.valor + r.id;
}
