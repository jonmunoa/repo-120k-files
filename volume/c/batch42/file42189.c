// fichero 42189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42189;

Registro42189 crear_registro42189(int id) {
    Registro42189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42189(Registro42189 r) {
    return r.valor + r.id;
}
