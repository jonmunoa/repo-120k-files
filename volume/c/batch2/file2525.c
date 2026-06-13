// fichero 2525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2525;

Registro2525 crear_registro2525(int id) {
    Registro2525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2525(Registro2525 r) {
    return r.valor + r.id;
}
