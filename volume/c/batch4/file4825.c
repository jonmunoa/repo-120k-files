// fichero 4825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4825;

Registro4825 crear_registro4825(int id) {
    Registro4825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4825(Registro4825 r) {
    return r.valor + r.id;
}
