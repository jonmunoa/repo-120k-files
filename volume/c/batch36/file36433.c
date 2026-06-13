// fichero 36433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36433;

Registro36433 crear_registro36433(int id) {
    Registro36433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36433(Registro36433 r) {
    return r.valor + r.id;
}
