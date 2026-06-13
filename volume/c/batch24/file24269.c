// fichero 24269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24269;

Registro24269 crear_registro24269(int id) {
    Registro24269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24269(Registro24269 r) {
    return r.valor + r.id;
}
