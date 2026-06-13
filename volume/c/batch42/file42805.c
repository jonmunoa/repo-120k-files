// fichero 42805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42805;

Registro42805 crear_registro42805(int id) {
    Registro42805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42805(Registro42805 r) {
    return r.valor + r.id;
}
