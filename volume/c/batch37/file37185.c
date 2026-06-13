// fichero 37185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37185;

Registro37185 crear_registro37185(int id) {
    Registro37185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37185(Registro37185 r) {
    return r.valor + r.id;
}
