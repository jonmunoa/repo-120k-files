// fichero 48805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48805;

Registro48805 crear_registro48805(int id) {
    Registro48805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48805(Registro48805 r) {
    return r.valor + r.id;
}
