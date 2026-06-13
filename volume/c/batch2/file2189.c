// fichero 2189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2189;

Registro2189 crear_registro2189(int id) {
    Registro2189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2189(Registro2189 r) {
    return r.valor + r.id;
}
