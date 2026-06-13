// fichero 27433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27433;

Registro27433 crear_registro27433(int id) {
    Registro27433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27433(Registro27433 r) {
    return r.valor + r.id;
}
