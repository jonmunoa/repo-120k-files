// fichero 37293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37293;

Registro37293 crear_registro37293(int id) {
    Registro37293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37293(Registro37293 r) {
    return r.valor + r.id;
}
