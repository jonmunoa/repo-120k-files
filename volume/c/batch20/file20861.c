// fichero 20861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20861;

Registro20861 crear_registro20861(int id) {
    Registro20861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20861(Registro20861 r) {
    return r.valor + r.id;
}
