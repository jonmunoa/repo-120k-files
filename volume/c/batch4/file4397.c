// fichero 4397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4397;

Registro4397 crear_registro4397(int id) {
    Registro4397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4397(Registro4397 r) {
    return r.valor + r.id;
}
