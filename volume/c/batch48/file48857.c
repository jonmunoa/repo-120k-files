// fichero 48857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48857;

Registro48857 crear_registro48857(int id) {
    Registro48857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48857(Registro48857 r) {
    return r.valor + r.id;
}
