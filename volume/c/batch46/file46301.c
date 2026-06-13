// fichero 46301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46301;

Registro46301 crear_registro46301(int id) {
    Registro46301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46301(Registro46301 r) {
    return r.valor + r.id;
}
