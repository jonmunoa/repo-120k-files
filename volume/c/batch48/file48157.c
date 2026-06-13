// fichero 48157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48157;

Registro48157 crear_registro48157(int id) {
    Registro48157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48157(Registro48157 r) {
    return r.valor + r.id;
}
