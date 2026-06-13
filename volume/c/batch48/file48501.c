// fichero 48501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48501;

Registro48501 crear_registro48501(int id) {
    Registro48501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48501(Registro48501 r) {
    return r.valor + r.id;
}
