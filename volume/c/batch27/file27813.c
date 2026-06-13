// fichero 27813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27813;

Registro27813 crear_registro27813(int id) {
    Registro27813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27813(Registro27813 r) {
    return r.valor + r.id;
}
