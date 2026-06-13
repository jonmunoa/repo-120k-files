// fichero 42921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42921;

Registro42921 crear_registro42921(int id) {
    Registro42921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42921(Registro42921 r) {
    return r.valor + r.id;
}
