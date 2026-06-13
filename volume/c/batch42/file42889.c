// fichero 42889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42889;

Registro42889 crear_registro42889(int id) {
    Registro42889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42889(Registro42889 r) {
    return r.valor + r.id;
}
