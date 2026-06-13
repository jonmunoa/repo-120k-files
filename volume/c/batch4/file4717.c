// fichero 4717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4717;

Registro4717 crear_registro4717(int id) {
    Registro4717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4717(Registro4717 r) {
    return r.valor + r.id;
}
