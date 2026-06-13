// fichero 24393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24393;

Registro24393 crear_registro24393(int id) {
    Registro24393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24393(Registro24393 r) {
    return r.valor + r.id;
}
