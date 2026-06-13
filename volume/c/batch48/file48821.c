// fichero 48821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48821;

Registro48821 crear_registro48821(int id) {
    Registro48821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48821(Registro48821 r) {
    return r.valor + r.id;
}
