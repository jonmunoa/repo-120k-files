// fichero 37649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37649;

Registro37649 crear_registro37649(int id) {
    Registro37649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37649(Registro37649 r) {
    return r.valor + r.id;
}
