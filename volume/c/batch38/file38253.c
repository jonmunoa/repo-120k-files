// fichero 38253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38253;

Registro38253 crear_registro38253(int id) {
    Registro38253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38253(Registro38253 r) {
    return r.valor + r.id;
}
