// fichero 48557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48557;

Registro48557 crear_registro48557(int id) {
    Registro48557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48557(Registro48557 r) {
    return r.valor + r.id;
}
