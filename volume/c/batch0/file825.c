// fichero 825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro825;

Registro825 crear_registro825(int id) {
    Registro825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro825(Registro825 r) {
    return r.valor + r.id;
}
