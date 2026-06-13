// fichero 45689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45689;

Registro45689 crear_registro45689(int id) {
    Registro45689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45689(Registro45689 r) {
    return r.valor + r.id;
}
