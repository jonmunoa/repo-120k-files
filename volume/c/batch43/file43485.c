// fichero 43485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43485;

Registro43485 crear_registro43485(int id) {
    Registro43485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43485(Registro43485 r) {
    return r.valor + r.id;
}
