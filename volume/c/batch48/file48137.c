// fichero 48137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48137;

Registro48137 crear_registro48137(int id) {
    Registro48137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48137(Registro48137 r) {
    return r.valor + r.id;
}
