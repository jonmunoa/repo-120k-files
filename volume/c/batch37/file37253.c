// fichero 37253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37253;

Registro37253 crear_registro37253(int id) {
    Registro37253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37253(Registro37253 r) {
    return r.valor + r.id;
}
