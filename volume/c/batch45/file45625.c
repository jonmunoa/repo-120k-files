// fichero 45625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45625;

Registro45625 crear_registro45625(int id) {
    Registro45625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45625(Registro45625 r) {
    return r.valor + r.id;
}
