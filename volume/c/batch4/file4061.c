// fichero 4061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4061;

Registro4061 crear_registro4061(int id) {
    Registro4061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4061(Registro4061 r) {
    return r.valor + r.id;
}
