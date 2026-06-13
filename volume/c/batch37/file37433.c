// fichero 37433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37433;

Registro37433 crear_registro37433(int id) {
    Registro37433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37433(Registro37433 r) {
    return r.valor + r.id;
}
