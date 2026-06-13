// fichero 48029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48029;

Registro48029 crear_registro48029(int id) {
    Registro48029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48029(Registro48029 r) {
    return r.valor + r.id;
}
