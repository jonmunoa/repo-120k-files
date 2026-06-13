// fichero 47937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47937;

Registro47937 crear_registro47937(int id) {
    Registro47937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47937(Registro47937 r) {
    return r.valor + r.id;
}
