// fichero 45725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45725;

Registro45725 crear_registro45725(int id) {
    Registro45725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45725(Registro45725 r) {
    return r.valor + r.id;
}
