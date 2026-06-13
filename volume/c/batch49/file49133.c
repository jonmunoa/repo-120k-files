// fichero 49133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49133;

Registro49133 crear_registro49133(int id) {
    Registro49133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49133(Registro49133 r) {
    return r.valor + r.id;
}
