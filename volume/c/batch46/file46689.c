// fichero 46689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46689;

Registro46689 crear_registro46689(int id) {
    Registro46689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46689(Registro46689 r) {
    return r.valor + r.id;
}
