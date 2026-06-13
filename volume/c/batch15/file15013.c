// fichero 15013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15013;

Registro15013 crear_registro15013(int id) {
    Registro15013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15013(Registro15013 r) {
    return r.valor + r.id;
}
