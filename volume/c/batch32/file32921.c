// fichero 32921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32921;

Registro32921 crear_registro32921(int id) {
    Registro32921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32921(Registro32921 r) {
    return r.valor + r.id;
}
