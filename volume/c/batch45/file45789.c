// fichero 45789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45789;

Registro45789 crear_registro45789(int id) {
    Registro45789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45789(Registro45789 r) {
    return r.valor + r.id;
}
