// fichero 14733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14733;

Registro14733 crear_registro14733(int id) {
    Registro14733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14733(Registro14733 r) {
    return r.valor + r.id;
}
