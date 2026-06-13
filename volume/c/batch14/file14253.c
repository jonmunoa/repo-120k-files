// fichero 14253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14253;

Registro14253 crear_registro14253(int id) {
    Registro14253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14253(Registro14253 r) {
    return r.valor + r.id;
}
