// fichero 42293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42293;

Registro42293 crear_registro42293(int id) {
    Registro42293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42293(Registro42293 r) {
    return r.valor + r.id;
}
