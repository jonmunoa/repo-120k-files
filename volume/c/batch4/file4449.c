// fichero 4449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4449;

Registro4449 crear_registro4449(int id) {
    Registro4449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4449(Registro4449 r) {
    return r.valor + r.id;
}
