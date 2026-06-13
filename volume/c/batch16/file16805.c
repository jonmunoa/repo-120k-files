// fichero 16805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16805;

Registro16805 crear_registro16805(int id) {
    Registro16805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16805(Registro16805 r) {
    return r.valor + r.id;
}
