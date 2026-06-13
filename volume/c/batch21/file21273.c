// fichero 21273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21273;

Registro21273 crear_registro21273(int id) {
    Registro21273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21273(Registro21273 r) {
    return r.valor + r.id;
}
