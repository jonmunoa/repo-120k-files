// fichero 43077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43077;

Registro43077 crear_registro43077(int id) {
    Registro43077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43077(Registro43077 r) {
    return r.valor + r.id;
}
