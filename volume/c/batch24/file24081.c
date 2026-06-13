// fichero 24081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24081;

Registro24081 crear_registro24081(int id) {
    Registro24081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24081(Registro24081 r) {
    return r.valor + r.id;
}
