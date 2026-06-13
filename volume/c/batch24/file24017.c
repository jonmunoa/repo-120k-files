// fichero 24017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24017;

Registro24017 crear_registro24017(int id) {
    Registro24017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24017(Registro24017 r) {
    return r.valor + r.id;
}
