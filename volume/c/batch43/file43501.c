// fichero 43501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43501;

Registro43501 crear_registro43501(int id) {
    Registro43501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43501(Registro43501 r) {
    return r.valor + r.id;
}
