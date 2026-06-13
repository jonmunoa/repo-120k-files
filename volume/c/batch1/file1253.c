// fichero 1253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1253;

Registro1253 crear_registro1253(int id) {
    Registro1253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1253(Registro1253 r) {
    return r.valor + r.id;
}
