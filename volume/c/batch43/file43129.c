// fichero 43129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43129;

Registro43129 crear_registro43129(int id) {
    Registro43129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43129(Registro43129 r) {
    return r.valor + r.id;
}
