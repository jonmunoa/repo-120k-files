// fichero 32217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32217;

Registro32217 crear_registro32217(int id) {
    Registro32217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32217(Registro32217 r) {
    return r.valor + r.id;
}
