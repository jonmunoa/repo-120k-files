// fichero 37201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37201;

Registro37201 crear_registro37201(int id) {
    Registro37201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37201(Registro37201 r) {
    return r.valor + r.id;
}
