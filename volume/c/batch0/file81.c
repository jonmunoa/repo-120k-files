// fichero 81 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro81;

Registro81 crear_registro81(int id) {
    Registro81 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro81(Registro81 r) {
    return r.valor + r.id;
}
