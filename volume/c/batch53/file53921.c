// fichero 53921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53921;

Registro53921 crear_registro53921(int id) {
    Registro53921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53921(Registro53921 r) {
    return r.valor + r.id;
}
