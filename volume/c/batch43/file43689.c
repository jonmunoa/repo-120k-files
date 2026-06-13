// fichero 43689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43689;

Registro43689 crear_registro43689(int id) {
    Registro43689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43689(Registro43689 r) {
    return r.valor + r.id;
}
