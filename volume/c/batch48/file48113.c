// fichero 48113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48113;

Registro48113 crear_registro48113(int id) {
    Registro48113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48113(Registro48113 r) {
    return r.valor + r.id;
}
