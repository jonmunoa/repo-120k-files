// fichero 42045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42045;

Registro42045 crear_registro42045(int id) {
    Registro42045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42045(Registro42045 r) {
    return r.valor + r.id;
}
