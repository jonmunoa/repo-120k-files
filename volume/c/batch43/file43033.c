// fichero 43033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43033;

Registro43033 crear_registro43033(int id) {
    Registro43033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43033(Registro43033 r) {
    return r.valor + r.id;
}
