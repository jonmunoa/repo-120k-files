// fichero 32765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32765;

Registro32765 crear_registro32765(int id) {
    Registro32765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32765(Registro32765 r) {
    return r.valor + r.id;
}
