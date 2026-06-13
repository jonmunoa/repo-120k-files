// fichero 27141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27141;

Registro27141 crear_registro27141(int id) {
    Registro27141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27141(Registro27141 r) {
    return r.valor + r.id;
}
