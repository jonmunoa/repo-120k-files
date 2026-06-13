// fichero 43605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43605;

Registro43605 crear_registro43605(int id) {
    Registro43605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43605(Registro43605 r) {
    return r.valor + r.id;
}
