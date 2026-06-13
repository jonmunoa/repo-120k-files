// fichero 43089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43089;

Registro43089 crear_registro43089(int id) {
    Registro43089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43089(Registro43089 r) {
    return r.valor + r.id;
}
