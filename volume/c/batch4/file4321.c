// fichero 4321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4321;

Registro4321 crear_registro4321(int id) {
    Registro4321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4321(Registro4321 r) {
    return r.valor + r.id;
}
