// fichero 48481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48481;

Registro48481 crear_registro48481(int id) {
    Registro48481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48481(Registro48481 r) {
    return r.valor + r.id;
}
