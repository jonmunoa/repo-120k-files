// fichero 15941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15941;

Registro15941 crear_registro15941(int id) {
    Registro15941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15941(Registro15941 r) {
    return r.valor + r.id;
}
