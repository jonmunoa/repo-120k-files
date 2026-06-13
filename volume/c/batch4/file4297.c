// fichero 4297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4297;

Registro4297 crear_registro4297(int id) {
    Registro4297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4297(Registro4297 r) {
    return r.valor + r.id;
}
