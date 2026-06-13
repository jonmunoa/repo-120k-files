// fichero 27337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27337;

Registro27337 crear_registro27337(int id) {
    Registro27337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27337(Registro27337 r) {
    return r.valor + r.id;
}
