// fichero 32329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32329;

Registro32329 crear_registro32329(int id) {
    Registro32329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32329(Registro32329 r) {
    return r.valor + r.id;
}
