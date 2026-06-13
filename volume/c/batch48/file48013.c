// fichero 48013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48013;

Registro48013 crear_registro48013(int id) {
    Registro48013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48013(Registro48013 r) {
    return r.valor + r.id;
}
