// fichero 42969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42969;

Registro42969 crear_registro42969(int id) {
    Registro42969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42969(Registro42969 r) {
    return r.valor + r.id;
}
