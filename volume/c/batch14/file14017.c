// fichero 14017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14017;

Registro14017 crear_registro14017(int id) {
    Registro14017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14017(Registro14017 r) {
    return r.valor + r.id;
}
