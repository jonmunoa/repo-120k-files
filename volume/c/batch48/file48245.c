// fichero 48245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48245;

Registro48245 crear_registro48245(int id) {
    Registro48245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48245(Registro48245 r) {
    return r.valor + r.id;
}
