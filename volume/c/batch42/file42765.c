// fichero 42765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42765;

Registro42765 crear_registro42765(int id) {
    Registro42765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42765(Registro42765 r) {
    return r.valor + r.id;
}
