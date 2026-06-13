// fichero 15481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15481;

Registro15481 crear_registro15481(int id) {
    Registro15481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15481(Registro15481 r) {
    return r.valor + r.id;
}
