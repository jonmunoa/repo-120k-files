// fichero 43557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43557;

Registro43557 crear_registro43557(int id) {
    Registro43557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43557(Registro43557 r) {
    return r.valor + r.id;
}
