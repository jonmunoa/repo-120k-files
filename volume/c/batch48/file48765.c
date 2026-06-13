// fichero 48765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48765;

Registro48765 crear_registro48765(int id) {
    Registro48765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48765(Registro48765 r) {
    return r.valor + r.id;
}
