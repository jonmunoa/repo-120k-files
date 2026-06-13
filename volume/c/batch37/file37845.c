// fichero 37845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37845;

Registro37845 crear_registro37845(int id) {
    Registro37845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37845(Registro37845 r) {
    return r.valor + r.id;
}
