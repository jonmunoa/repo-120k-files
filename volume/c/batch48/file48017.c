// fichero 48017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48017;

Registro48017 crear_registro48017(int id) {
    Registro48017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48017(Registro48017 r) {
    return r.valor + r.id;
}
