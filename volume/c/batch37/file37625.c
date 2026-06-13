// fichero 37625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37625;

Registro37625 crear_registro37625(int id) {
    Registro37625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37625(Registro37625 r) {
    return r.valor + r.id;
}
