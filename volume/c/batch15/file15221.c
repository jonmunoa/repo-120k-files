// fichero 15221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15221;

Registro15221 crear_registro15221(int id) {
    Registro15221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15221(Registro15221 r) {
    return r.valor + r.id;
}
