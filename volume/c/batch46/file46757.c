// fichero 46757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46757;

Registro46757 crear_registro46757(int id) {
    Registro46757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46757(Registro46757 r) {
    return r.valor + r.id;
}
