// fichero 32689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32689;

Registro32689 crear_registro32689(int id) {
    Registro32689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32689(Registro32689 r) {
    return r.valor + r.id;
}
