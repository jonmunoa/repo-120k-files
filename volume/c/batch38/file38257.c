// fichero 38257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38257;

Registro38257 crear_registro38257(int id) {
    Registro38257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38257(Registro38257 r) {
    return r.valor + r.id;
}
