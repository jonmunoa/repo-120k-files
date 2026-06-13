// fichero 45969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45969;

Registro45969 crear_registro45969(int id) {
    Registro45969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45969(Registro45969 r) {
    return r.valor + r.id;
}
