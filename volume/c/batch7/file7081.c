// fichero 7081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7081;

Registro7081 crear_registro7081(int id) {
    Registro7081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7081(Registro7081 r) {
    return r.valor + r.id;
}
