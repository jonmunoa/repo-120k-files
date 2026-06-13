// fichero 43345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43345;

Registro43345 crear_registro43345(int id) {
    Registro43345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43345(Registro43345 r) {
    return r.valor + r.id;
}
