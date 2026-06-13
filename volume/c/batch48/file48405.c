// fichero 48405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48405;

Registro48405 crear_registro48405(int id) {
    Registro48405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48405(Registro48405 r) {
    return r.valor + r.id;
}
