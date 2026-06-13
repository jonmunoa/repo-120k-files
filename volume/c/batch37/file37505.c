// fichero 37505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37505;

Registro37505 crear_registro37505(int id) {
    Registro37505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37505(Registro37505 r) {
    return r.valor + r.id;
}
