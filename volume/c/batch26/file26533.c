// fichero 26533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26533;

Registro26533 crear_registro26533(int id) {
    Registro26533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26533(Registro26533 r) {
    return r.valor + r.id;
}
