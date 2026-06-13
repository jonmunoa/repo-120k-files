// fichero 4433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4433;

Registro4433 crear_registro4433(int id) {
    Registro4433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4433(Registro4433 r) {
    return r.valor + r.id;
}
