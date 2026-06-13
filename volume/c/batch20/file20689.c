// fichero 20689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20689;

Registro20689 crear_registro20689(int id) {
    Registro20689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20689(Registro20689 r) {
    return r.valor + r.id;
}
