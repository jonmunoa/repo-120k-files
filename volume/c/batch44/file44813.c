// fichero 44813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44813;

Registro44813 crear_registro44813(int id) {
    Registro44813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44813(Registro44813 r) {
    return r.valor + r.id;
}
