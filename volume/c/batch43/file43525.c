// fichero 43525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43525;

Registro43525 crear_registro43525(int id) {
    Registro43525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43525(Registro43525 r) {
    return r.valor + r.id;
}
