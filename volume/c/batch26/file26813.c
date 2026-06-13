// fichero 26813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26813;

Registro26813 crear_registro26813(int id) {
    Registro26813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26813(Registro26813 r) {
    return r.valor + r.id;
}
