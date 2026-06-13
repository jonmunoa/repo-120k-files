// fichero 43057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43057;

Registro43057 crear_registro43057(int id) {
    Registro43057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43057(Registro43057 r) {
    return r.valor + r.id;
}
