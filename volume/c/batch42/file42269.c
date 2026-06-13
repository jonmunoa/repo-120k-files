// fichero 42269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42269;

Registro42269 crear_registro42269(int id) {
    Registro42269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42269(Registro42269 r) {
    return r.valor + r.id;
}
