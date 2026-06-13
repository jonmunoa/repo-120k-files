// fichero 5089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5089;

Registro5089 crear_registro5089(int id) {
    Registro5089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5089(Registro5089 r) {
    return r.valor + r.id;
}
