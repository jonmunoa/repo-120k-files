// fichero 4761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4761;

Registro4761 crear_registro4761(int id) {
    Registro4761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4761(Registro4761 r) {
    return r.valor + r.id;
}
