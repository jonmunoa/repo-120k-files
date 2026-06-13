// fichero 15921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15921;

Registro15921 crear_registro15921(int id) {
    Registro15921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15921(Registro15921 r) {
    return r.valor + r.id;
}
