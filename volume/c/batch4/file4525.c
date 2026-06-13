// fichero 4525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4525;

Registro4525 crear_registro4525(int id) {
    Registro4525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4525(Registro4525 r) {
    return r.valor + r.id;
}
