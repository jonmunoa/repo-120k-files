// fichero 24413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24413;

Registro24413 crear_registro24413(int id) {
    Registro24413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24413(Registro24413 r) {
    return r.valor + r.id;
}
