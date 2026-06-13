// fichero 48069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48069;

Registro48069 crear_registro48069(int id) {
    Registro48069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48069(Registro48069 r) {
    return r.valor + r.id;
}
