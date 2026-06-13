// fichero 14889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14889;

Registro14889 crear_registro14889(int id) {
    Registro14889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14889(Registro14889 r) {
    return r.valor + r.id;
}
