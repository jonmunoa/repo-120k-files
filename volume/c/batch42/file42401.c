// fichero 42401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42401;

Registro42401 crear_registro42401(int id) {
    Registro42401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42401(Registro42401 r) {
    return r.valor + r.id;
}
