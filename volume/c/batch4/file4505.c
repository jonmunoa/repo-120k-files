// fichero 4505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4505;

Registro4505 crear_registro4505(int id) {
    Registro4505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4505(Registro4505 r) {
    return r.valor + r.id;
}
