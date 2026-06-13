// fichero 42845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42845;

Registro42845 crear_registro42845(int id) {
    Registro42845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42845(Registro42845 r) {
    return r.valor + r.id;
}
