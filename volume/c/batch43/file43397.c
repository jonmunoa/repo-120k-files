// fichero 43397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43397;

Registro43397 crear_registro43397(int id) {
    Registro43397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43397(Registro43397 r) {
    return r.valor + r.id;
}
